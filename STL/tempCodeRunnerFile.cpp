list<int>::iterator it2 = myList.begin();

    while (it2 != myList.end())
    {
        (*it2) += 2;
        cout << *it2 << " ";
        it2++;
    }
    cout << endl;