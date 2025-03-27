
# Snippet Printf

{	// Place your GLOBAL snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "python",
		"prefix": "printf",
		"body": [
			"print(f\"Hola, {$1}. Tienes {$2} años.\")",
			"$3"
		],
		"description": "Printf en python"
	}
}

# Snippet numero decimal
{
	// Place your GLOBAL snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "VariableDecimal",
		"body": [
			"b=float(input('Digitalice un valor Decimal:'))",
			"$2"
		],
		"description": "Ingrese un numero decimal"
	}
}

#snippet numero entero
{
	// Place your área de trabajo de python snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "VariableEntero",
		"body": [
			"a=float(input('Digitalice un valor Entero:'))",
			
			"$2"
		],
		"description": "Ingresar un valor entero"
	}
}

# snippet limpiar pantalla
{
	// Place your GLOBAL snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "limpiar",
		"body": [
			
			
			"$2"
		],
		"description": "Limpiar la pantalla de la consola"
	}
}

# snippet variable caracteres

{
	// Place your GLOBAL snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "python",
		"prefix": "caracter",
		"body": [
			"variableCaracter=(input('Digitalice un valor de Caracter'))",
			"$2"
		],
		"description": "Ingrese un valor de caracter"
	}
}

# snippet hola mundo 

{
	// Place your GLOBAL snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "hola",
		"body": [
			"Print('Hola mundo!')",
			"$2"
		],
		"description": "Log output to console"

	}
}
