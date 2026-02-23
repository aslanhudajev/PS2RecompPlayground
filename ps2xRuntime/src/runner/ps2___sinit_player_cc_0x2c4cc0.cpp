#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Ghidra decomp: PlModeTbl = _567 (12-byte copy from 0x273000 to 0x273090), then explicit vtable writes.
// PTR_* values are addresses from symbol names; _568.._575 are ptmf offsets (0); __ptmf_null = 0.
void ps2___sinit_player_cc_0x2c4cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    PS2_INIT_LOG_ENTRY("ps2___sinit_player_cc");

    // PlModeTbl = _567: 12-byte copy from 0x273000 to 0x273090
    WRITE32(0x273090u, READ32(0x273000u));
    WRITE32(0x273094u, READ32(0x273004u));
    WRITE32(0x273098u, READ32(0x273008u));

    WRITE32(0x273098u, 0x273008u);   // DAT_00273098 = PTR_firstGameInit__10PlayerTaskFv_00273008
    WRITE32(0x2730acu, 0u);          // DAT_002730ac = _568 (ptmf offset)
    WRITE32(0x2730b0u, 0x273014u);   // DAT_002730b0 = PTR_00273014
    WRITE32(0x2730b4u, 0x273018u);   // DAT_002730b4 = PTR_contGameInit__10PlayerTaskFv_00273018
    WRITE32(0x2730c8u, 0u);          // DAT_002730c8 = _569
    WRITE32(0x2730ccu, 0x273024u);   // DAT_002730cc = PTR_00273024
    WRITE32(0x2730d0u, 0x273028u);   // DAT_002730d0 = PTR_stageGameInit__10PlayerTaskFv_00273028
    WRITE32(0x2730e4u, 0u);          // DAT_002730e4 = _570
    WRITE32(0x2730e8u, 0x273034u);   // DAT_002730e8 = PTR_00273034
    WRITE32(0x2730ecu, 0x273038u);   // DAT_002730ec = PTR_joinGameInit__10PlayerTaskFv_00273038
    WRITE32(0x273100u, 0u);          // DAT_00273100 = _571
    WRITE32(0x273104u, 0x273044u);   // DAT_00273104 = PTR_00273044
    WRITE32(0x273108u, 0x273048u);   // DAT_00273108 = PTR_contInit__10PlayerTaskFv_00273048
    WRITE32(0x27311cu, 0u);          // DAT_0027311c = __ptmf_null
    WRITE32(0x273120u, READ32(0x25fc8cu));   // DAT_00273120 = DAT_0025fc8c
    WRITE32(0x273124u, READ32(0x25fc90u));   // DAT_00273124 = DAT_0025fc90
    WRITE32(0x273138u, 0u);          // DAT_00273138 = _572
    WRITE32(0x27313cu, 0x273054u);   // DAT_0027313c = PTR_00273054
    WRITE32(0x273140u, 0x273058u);   // DAT_00273140 = PTR_gmoverInit__10PlayerTaskFv_00273058
    WRITE32(0x273154u, 0u);          // DAT_00273154 = __ptmf_null
    WRITE32(0x273158u, READ32(0x25fc8cu));
    WRITE32(0x27315cu, READ32(0x25fc90u));
    WRITE32(0x273170u, 0u);          // DAT_00273170 = _573
    WRITE32(0x273174u, 0x273064u);
    WRITE32(0x273178u, 0x273068u);   // PTR_nameentInit__10PlayerTaskFv_00273068
    WRITE32(0x27318cu, 0u);          // DAT_0027318c = _574
    WRITE32(0x273190u, 0x273074u);
    WRITE32(0x273194u, 0x273078u);   // PTR_joinWaitInit__10PlayerTaskFv_00273078
    WRITE32(0x2731a8u, 0u);          // DAT_002731a8 = _575
    WRITE32(0x2731acu, 0x273084u);
    WRITE32(0x2731b0u, 0x273088u);   // PTR_waitInit__10PlayerTaskFv_00273088
    WRITE32(0x2731c4u, 0u);          // __ptmf_null
    WRITE32(0x2731c8u, READ32(0x25fc8cu));
    WRITE32(0x2731ccu, READ32(0x25fc90u));
    WRITE32(0x2731e0u, 0u);          // __ptmf_null
    WRITE32(0x2731e4u, READ32(0x25fc8cu));
    WRITE32(0x2731e8u, READ32(0x25fc90u));
    WRITE32(0x2731fcu, 0u);          // __ptmf_null
    WRITE32(0x273200u, READ32(0x25fc8cu));
    WRITE32(0x273204u, READ32(0x25fc90u));

    ctx->pc = getRegU32(ctx, 31);
}
