import React, { useState } from 'react';
import './ExpenseForm.css';

const ExpenseForm = () => {
    // const [enteredTitle, setEnteredTitle] = useState('');
    // const [enteredAmount, setEnteredAmount] = useState('');
    // const [enteredDate, setEnteredDate] = useState('');
    // -> 이렇게 말고도 객체로 표현이 가능하다.
    const [userInput, setUserInput] = useState({
        enteredTitle: '',
        enteredAmount: '',
        enteredDate: '',
    });

    const titleChangeHadler = (event) => {
        setUserInput({
            ...userInput,
            enteredTitle: event.target.value,
        });
    };
    const amountChangeHandler = (event) => {
        setEnteredAmount({
            ...userInput,
            enteredAmount: event.target.value,
        });
    };
    const dateChangeHandler = (event) => {
        setEnteredDate({
            ...userInput,
            enteredDate: event.target.value
        });
    };

    return (
        <form>
            <div className="new-expense__controls">
                <div className="new-expense__control">
                    <label>Title</label>
                    <input type="text" onChange={titleChangeHadler}/>
                </div>
                <div className="new-expense__control">
                    <label>Amount</label>
                    <input type="number" min="0.01" step="0.01" />
                </div>
                <div className="new-expense__control">
                    <label>Date</label>
                    <input type="date" min="2019-01-01" max="2022-12-31" />
                </div>
            </div>
            <div className="new-expense__actions">
                <button type="submit">Add Expense</button>
            </div>
        </form>
    );
};

export default ExpenseForm;
