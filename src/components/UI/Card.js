// import './Card.css';

// function Card(props) {
//     const classes = 'card ' + props.className;

//     return <div className="{classes}">{props.children}</div>; // children -> 에약어
// }

// export default Card;
import React from 'react';
import './Card.css';

const Card = (props) => {
  const classes = 'card ' + props.className;
  
  return <div className={classes}>{props.children}</div>;
}

export default Card;