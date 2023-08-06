//Reading operation from solana
const {clusterApiUrl, Connection, PublicKey, LAMPORTS_PER_SOL} = require("@solana/web3.js");

const connection = new Connection(clusterApiUrl("devnet"));     
//making the connetion with json rpc

async function getBalanceWeb3(address){
    return connection.getBalance(address);
}

const publickey = new PublicKey("2KgowxogBrGqRcgXQEmqFvC3PGtCu66qERNJevYW8Ajh");
// to find publickey you go to solana explorer

getBalanceWeb3(publickey).then((balance)=>{
    console.log(balance/LAMPORTS_PER_SOL);
})
//try removing lamports_per_sol then it will give the sol tokens value