#include "libnuraft/nuraft.hxx"

class PikaSm : nuraft::state_machine {
    bool apply_snapshot(nuraft::snapshot& s) {

    }

    nuraft::ptr<nuraft::snapshot> last_snapshot() {

    }

    nuraft::ulong last_commit_index() {

    }
};