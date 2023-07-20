// Challenge / Exercise

// 1. Add five new (dummy) page components (content can be simple <h1> elements)
//    - HomePage
//    - EventsPage
//    - EventDetailPage
//    - NewEventPage
//    - EditEventPage
// 2. Add routing & route definitions for these five pages
//    - / => HomePage
//    - /events => EventsPage
//    - /events/<some-id> => EventDetailPage
//    - /events/new => NewEventPage
//    - /events/<some-id>/edit => EditEventPage
// 3. Add a root layout that adds the <MainNavigation> component above all page components
// 4. Add properly working links to the MainNavigation
// 5. Ensure that the links in MainNavigation receive an "active" class when active
// 6. Output a list of dummy events to the EventsPage
//    Every list item should include a link to the respective EventDetailPage
// 7. Output the ID of the selected event on the EventDetailPage
// BONUS: Add another (nested) layout route that adds the <EventNavigation> component above all /events... page components

// 도전과제 / 연습

// 1. 다섯 개의 새로운 (더미) 페이지 컴포넌트를 추가하세요 (내용은 간단한 <h1> 요소일 수 있습니다)
// - HomePage
// - EventsPage
// - EventDetailPage
// - NewEventPage
// - EditEventPage
// 2. 이 다섯 개의 페이지에 대한 라우팅과 라우트 정의를 추가하세요
// - / => HomePage
// - /events => EventsPage
// - /events/<some-id> => EventDetailPage
// - /events/new => NewEventPage
// - /events/<some-id>/edit => EditEventPage
// 3. 모든 페이지 컴포넌트 위에 <MainNavigation> 컴포넌트를 추가하는 루트 레이아웃을 추가하세요
// 4. MainNavigation에 정상적으로 작동하는 링크를 추가하세요
// 5. MainNavigation의 링크가 활성화되었을 때 "active" 클래스를 받도록 하세요
// 6. EventsPage에 더미 이벤트 목록을 출력하세요
// 각 리스트 항목은 해당하는 EventDetailPage로의 링크를 포함해야 합니다
// 7. EventDetailPage에서 선택된 이벤트의 ID를 출력하세요
// 보너스: /events... 페이지 컴포넌트들 위에 <EventNavigation> 컴포넌트를 추가하는 다른 (중첩된) 레이아웃 라우트를 추가하세요
import { RouterProvider, createBrowserRouter } from 'react-router-dom'; // ,
import HomePage from './Pages/Home';
import EventsPage from './Pages/Events';
import EventDetailPage from './Pages/EventDetail';
import EventsRootLayout from './Pages/EventsRoot';
import EditEventPage from './Pages/EditEvent';
import NewEventPage from './Pages/NewEvent';
import RootLayout from './Pages/Root';

const router = createBrowserRouter([
    {
        // - / => HomePage(완료)
        path: '/',
        element: <RootLayout />,
        // errorElement: <>,
        children: [
            { index: true, element: <HomePage /> },
            // - /events => EventsPage
            {
                path: 'events',
                element: <EventsRootLayout />,
                children: [
                    { index: true, element: <EventsPage /> },
                    {
                        // - /events/<some-id>/edit => EditEventPage
                        path: ':eventId',
                        element: <EventDetailPage />,
                        children: [
                            { index: true, element: <EventDetailPage /> },
                            {
                                path: 'edit',
                                element: <EditEventPage />
                            }
                        ]
                    },
                    // - /events/new => NewEventPage
                    { path: 'new', element: <NewEventPage /> }
                ]
            }
            // - /events/<some-id> => EventDetailPage
        ]
    }
]);

function App() {
    return <RouterProvider router={router} />;
}

export default App;
