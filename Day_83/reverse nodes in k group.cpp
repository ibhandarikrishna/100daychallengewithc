public class ReverseNodesInKGroup {

    public ListNode reverseKGroup(ListNode head, int k) {
        // Base condition
        if (head == null || k == 1) {
            return head;
        }
        // Dummy node before head
        ListNode dummy = new ListNode(-1);
        // Point the next of this dummy to the current head
        dummy.next = head;
        // Node to keep track of the previous node
        ListNode previous = dummy;
        // Variable to keep count of the nodes in the linked list
        int count = 0;
        // Reference to the head which will be used to traverse
        ListNode current = head;
        while (current != null) {
            count++;
            if (count % k == 0) {
                previous = reverse(previous, current.next);
                current = previous.next;
            } else {
                current = current.next;
            }
        }
        return dummy.next;
    }

    private ListNode reverse(ListNode start, ListNode end) {
        // Previous node of the current node
        ListNode previous = start.next;
        // Current node
        ListNode current = previous.next;
        // Next node of the current node
        ListNode next;
        // Loop for the whole interval
        while (current != end) {
            // Next node of the current node
            next = current.next;
            // Next of current will point to the previous
            current.next = start.next;
            // Current node will become the previous node
            start.next = current;
            // Move pointer ahead
            current = next;
        }
        previous.next = end;
        // Return head node of the reversed linked list
        return previous;
    }
}
