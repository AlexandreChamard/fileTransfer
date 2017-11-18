connection: 	debut de requete
get:		recoie le fichier demander
post:		post le fichier
put:		remplace le fichier
move:		déplace le fichier
delete:		suprimme le fichier (droit admin ?)
list:		list les fichiers existant dans une ou plusieurs categories.

builtin:
requetes / commandes
ls / !ls
cd / !cd
pwd
find
exit

commandes
get:		req + path[512]
delete:		req + path[512]
infos:		req + path[512]
post:		req + path[512] nb_packets + MD5
put:		req + path[512] nb_packets + MD5
move:		req + path[512] NewPath[508]
ls:		req + ac av
pwd:		req + ac av
cd:		req + ac av
find:		req + ac av

reponse server:
get:		verif + nb_packets + MD5
post:		verif
put:		verif
move:		verif//done
delete:		verif//done
infos:		verif + nb_packets
ls:		verif + nb_packets
pwd:		verif + nb_packets
cd:		verif + nb_packets
find:		verif + nb_packets


post:
client			Server
envoie header
			OK / PAS OK
envoie packets * n	recoie packets * n
			verif MD5
			OK / PAS OK
si pas ok recall ?

post:
client			Server
envoie header
			OK / PAS OK
recoie packets * n	envoie packets * n
verif MD5
si pas ok recall ?
