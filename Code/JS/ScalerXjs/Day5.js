function getFileExtension(filename){
    const ext=filename.slice(filename.lastIndexOf('.')+1);
    console.log(ext);
}
const filename='temp.js';
getFileExtension(filename);
