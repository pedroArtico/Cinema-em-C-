CREATE TABLE Sala (
	ID_sala integer PRIMARY KEY AUTOINCREMENT,
	tipo varchar,
	numPoltronas integer,
	nome string
);

CREATE TABLE Sessao (
	ID_sessao integer PRIMARY KEY AUTOINCREMENT,
	precoBase float,
	ID_sala integer,
	ID_filme integer
);

CREATE TABLE Filme (
	ID_filme integer PRIMARY KEY AUTOINCREMENT,
	nome varchar,
	duracao float,
	iniExib date,
	fimExib date
);

CREATE TABLE Ingresso (
	ID_ingresso integer PRIMARY KEY AUTOINCREMENT,
	formaPgto varchar,
	tipo varchar,
	ID_sessao integer,
	ID_funcionario integer,
	ID_poltrona integer
);

CREATE TABLE Funcionario (
	ID_funcionario integer PRIMARY KEY AUTOINCREMENT,
	nome varchar,
	login varchar,
	senha varchar,
	tipo varchar
);

CREATE TABLE Poltrona (
	ID_poltrona integer PRIMARY KEY AUTOINCREMENT,
	numPoltrona integer,
	estadoOcupada boolean,
	coordenada integer
);

CREATE TABLE CoordenadaPoltrona (
	ID_coordenada integer PRIMARY KEY AUTOINCREMENT,
	poltronaFileira integer,
	poltronaColuna integer
);

CREATE TABLE Sessao_Poltronas (
	ID_sessaoPoltronas integer PRIMARY KEY AUTOINCREMENT,
	ID_sessao integer,
	ID_poltrona integer
);

