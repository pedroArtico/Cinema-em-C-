CREATE TABLE `Sala` (
	`ID_sala` INT NOT NULL,
	`tipo` varchar NOT NULL,
	`numPoltronas` INT NOT NULL,
	PRIMARY KEY (`ID_sala`)
);

CREATE TABLE `Sessao` (
	`ID_sessao` INT NOT NULL,
	`precoBase` FLOAT NOT NULL,
	`ID_sala` INT NOT NULL,
	`ID_filme` INT NOT NULL,
	PRIMARY KEY (`ID_sessao`)
);

CREATE TABLE `Filme` (
	`ID_filme` INT NOT NULL,
	`nome` varchar(30) NOT NULL,
	`duracao` FLOAT NOT NULL,
	`iniExib` DATE NOT NULL,
	`fimExib` DATE NOT NULL,
	PRIMARY KEY (`ID_filme`)
);

CREATE TABLE `Ingresso` (
	`ID_ingresso` INT NOT NULL,
	`formaPgto` varchar(10) NOT NULL,
	`tipo` varchar(10) NOT NULL,
	`ID_sessao` INT NOT NULL,
	`ID_funcionario` INT NOT NULL,
	`ID_poltrona` INT NOT NULL,
	PRIMARY KEY (`ID_ingresso`)
);

CREATE TABLE `Funcionario` (
	`ID_funcionario` INT NOT NULL,
	`nome` varchar(50) NOT NULL,
	`login` varchar(20) NOT NULL UNIQUE,
	`senha` varchar(20) NOT NULL,
	`tipo` varchar(15) NOT NULL,
	PRIMARY KEY (`ID_funcionario`)
);

CREATE TABLE `Poltrona` (
	`ID_poltrona` INT NOT NULL,
	`numPoltrona` INT NOT NULL,
	`estadoOcupada` BOOLEAN NOT NULL,
	`coordenada` INT NOT NULL,
	PRIMARY KEY (`ID_poltrona`)
);

CREATE TABLE `CoordenadaPoltrona` (
	`ID_coordenada` INT NOT NULL,
	`poltronaFileira` INT NOT NULL,
	`poltronaColuna` INT NOT NULL,
	PRIMARY KEY (`ID_coordenada`)
);

CREATE TABLE `Sessao_Poltronas` (
	`ID_sessaoPoltronas` INT NOT NULL,
	`ID_sessao` INT NOT NULL,
	`ID_poltrona` INT NOT NULL,
	PRIMARY KEY (`ID_sessaoPoltronas`)
);

ALTER TABLE `Sessao` ADD CONSTRAINT `Sessao_fk0` FOREIGN KEY (`ID_sala`) REFERENCES `Sala`(`ID_sala`);

ALTER TABLE `Sessao` ADD CONSTRAINT `Sessao_fk1` FOREIGN KEY (`ID_filme`) REFERENCES `Filme`(`ID_filme`);

ALTER TABLE `Ingresso` ADD CONSTRAINT `Ingresso_fk0` FOREIGN KEY (`ID_sessao`) REFERENCES `Sessao`(`ID_sessao`);

ALTER TABLE `Ingresso` ADD CONSTRAINT `Ingresso_fk1` FOREIGN KEY (`ID_funcionario`) REFERENCES `Funcionario`(`ID_funcionario`);

ALTER TABLE `Ingresso` ADD CONSTRAINT `Ingresso_fk2` FOREIGN KEY (`ID_poltrona`) REFERENCES `Poltrona`(`ID_poltrona`);

ALTER TABLE `Poltrona` ADD CONSTRAINT `Poltrona_fk0` FOREIGN KEY (`coordenada`) REFERENCES `CoordenadaPoltrona`(`ID_coordenada`);

ALTER TABLE `Sessao_Poltronas` ADD CONSTRAINT `Sessao_Poltronas_fk0` FOREIGN KEY (`ID_sessao`) REFERENCES `Sessao`(`ID_sessao`);

ALTER TABLE `Sessao_Poltronas` ADD CONSTRAINT `Sessao_Poltronas_fk1` FOREIGN KEY (`ID_poltrona`) REFERENCES `Poltrona`(`ID_poltrona`);

