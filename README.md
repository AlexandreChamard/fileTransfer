## Client

permet a une personne de push des fichiers à un server ou de les pull.

peut envoyer des requetes:
get:	recoie le fichier demander
post:	post le fichier
update:	remplace le fichier
move:	déplace le fichier
delete:	suprimme le fichier (droit admin ?)
list:	list les fichiers existant dans une ou plusieurs categories.

## Server

serveur de stockage de fichiers et peut les renvoyer.
recoie des commandes et les executent.


.config:
home: reference le /
data: dossier avec tout les fichiers // pas de sous dossier
references: dossier avec infos sur les fichiers stockés // peut comprendre des sous-dossiers


.env:	fichier avec des vars
nb file: nombre de fichiers stockés
taille:  taille total d'octets stockés
ip:


exemple fichier reference:
	-	nom: 		nom du ficher
	-	type: 		type du fichier nom de l'extension (ex: mp4, wav, png, ...)
	-	taille: 	taille en octets
	-	path:		lien du fichier dans le dossier data
	-	description:	blablabla...


exemple de hierarchie;
.
├── .config
├── .env
├── data
|   ├── fichier1
|   ├── fichier2
|   ├── fichier3
|   └── fichier4
└── references
    ├── films
    |   ├── Thor: Ragnarock		// path: data/fichier1
    |   └── Kingsman: Le cercle d'or	// path: data/fichier2
    └── images
        ├── la Joconde			// path: data/fichier3
        └── Mabite			// path: data/fichier4
