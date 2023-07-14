import React from 'react'; // 이것은 선택사항

import ExpenseItem from './ExpenseItem'; // 10번째 줄에서 ExpenseItem을 사용중
import './ExpenseList.css';


const ExpensesList = props => {

    if (props.items.length === 0) {
        return <h2 className='expenses-list__fallback'> Found No expenses. </h2>
    }
    return <ul className='expenses-list'>
        {props.items.map((expense) => (
            <ExpenseItem key={expense.id} title={expense.title} amount={expense.amount} date={expense.date} />
        ))}

    </ul>
};

export default ExpensesList;