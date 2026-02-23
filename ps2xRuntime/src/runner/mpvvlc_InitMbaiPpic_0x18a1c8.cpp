#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitMbaiPpic
// Address: 0x18a1c8 - 0x18a530
void mpvvlc_InitMbaiPpic_0x18a1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitMbaiPpic");


    ctx->pc = 0x18a1c8u;

    // 0x18a1c8: 0x3c020024
    ctx->pc = 0x18a1c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18a1cc: 0x24030240
    ctx->pc = 0x18a1ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 576));
    // 0x18a1d0: 0x24471cf8
    ctx->pc = 0x18a1d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 7416));
    // 0x18a1d4: 0x24020007
    ctx->pc = 0x18a1d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_18a1d8:
    // 0x18a1d8: 0xa4e30000
    ctx->pc = 0x18a1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a1dc: 0x2442ffff
    ctx->pc = 0x18a1dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a1e0: 0x24e70002
    ctx->pc = 0x18a1e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a1e4: 0x0
    ctx->pc = 0x18a1e4u;
    // NOP
    // 0x18a1e8: 0x0
    ctx->pc = 0x18a1e8u;
    // NOP
    // 0x18a1ec: 0x441fffa
    ctx->pc = 0x18A1ECu;
    {
        const bool branch_taken_0x18a1ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18a1ec) {
            ctx->pc = 0x18A1D8u;
            goto label_18a1d8;
        }
    }
    ctx->pc = 0x18A1F4u;
    // 0x18a1f4: 0x2403023b
    ctx->pc = 0x18a1f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 571));
    // 0x18a1f8: 0x102d
    ctx->pc = 0x18a1f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1fc: 0x0
    ctx->pc = 0x18a1fcu;
    // NOP
label_18a200:
    // 0x18a200: 0xa4e30000
    ctx->pc = 0x18a200u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a204: 0x2442ffff
    ctx->pc = 0x18a204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a208: 0x24e70002
    ctx->pc = 0x18a208u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a20c: 0x0
    ctx->pc = 0x18a20cu;
    // NOP
    // 0x18a210: 0x0
    ctx->pc = 0x18a210u;
    // NOP
    // 0x18a214: 0x441fffa
    ctx->pc = 0x18A214u;
    {
        const bool branch_taken_0x18a214 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18a214) {
            ctx->pc = 0x18A200u;
            goto label_18a200;
        }
    }
    ctx->pc = 0x18A21Cu;
    // 0x18a21c: 0x24030240
    ctx->pc = 0x18a21cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 576));
    // 0x18a220: 0x24020005
    ctx->pc = 0x18a220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x18a224: 0x0
    ctx->pc = 0x18a224u;
    // NOP
label_18a228:
    // 0x18a228: 0xa4e30000
    ctx->pc = 0x18a228u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a22c: 0x2442ffff
    ctx->pc = 0x18a22cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a230: 0x24e70002
    ctx->pc = 0x18a230u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a234: 0x0
    ctx->pc = 0x18a234u;
    // NOP
    // 0x18a238: 0x0
    ctx->pc = 0x18a238u;
    // NOP
    // 0x18a23c: 0x441fffa
    ctx->pc = 0x18A23Cu;
    {
        const bool branch_taken_0x18a23c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18a23c) {
            ctx->pc = 0x18A228u;
            goto label_18a228;
        }
    }
    ctx->pc = 0x18A244u;
    // 0x18a244: 0x2403022b
    ctx->pc = 0x18a244u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 555));
    // 0x18a248: 0x102d
    ctx->pc = 0x18a248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a24c: 0x0
    ctx->pc = 0x18a24cu;
    // NOP
label_18a250:
    // 0x18a250: 0xa4e30000
    ctx->pc = 0x18a250u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a254: 0x2442ffff
    ctx->pc = 0x18a254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a258: 0x24e70002
    ctx->pc = 0x18a258u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a25c: 0x0
    ctx->pc = 0x18a25cu;
    // NOP
    // 0x18a260: 0x0
    ctx->pc = 0x18a260u;
    // NOP
    // 0x18a264: 0x441fffa
    ctx->pc = 0x18A264u;
    {
        const bool branch_taken_0x18a264 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18a264) {
            ctx->pc = 0x18A250u;
            goto label_18a250;
        }
    }
    ctx->pc = 0x18A26Cu;
    // 0x18a26c: 0x24030240
    ctx->pc = 0x18a26cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 576));
    // 0x18a270: 0x24020007
    ctx->pc = 0x18a270u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18a274: 0x0
    ctx->pc = 0x18a274u;
    // NOP
label_18a278:
    // 0x18a278: 0xa4e30000
    ctx->pc = 0x18a278u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a27c: 0x2442ffff
    ctx->pc = 0x18a27cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a280: 0x24e70002
    ctx->pc = 0x18a280u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a284: 0x0
    ctx->pc = 0x18a284u;
    // NOP
    // 0x18a288: 0x0
    ctx->pc = 0x18a288u;
    // NOP
    // 0x18a28c: 0x441fffa
    ctx->pc = 0x18A28Cu;
    {
        const bool branch_taken_0x18a28c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18a28c) {
            ctx->pc = 0x18A278u;
            goto label_18a278;
        }
    }
    ctx->pc = 0x18A294u;
    // 0x18a294: 0x24040021
    ctx->pc = 0x18a294u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 33));
label_18a298:
    // 0x18a298: 0x41100
    ctx->pc = 0x18a298u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x18a29c: 0x3442000b
    ctx->pc = 0x18a29cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 11));
    // 0x18a2a0: 0x2484ffff
    ctx->pc = 0x18a2a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a2a4: 0xa4e20000
    ctx->pc = 0x18a2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a2a8: 0x28830016
    ctx->pc = 0x18a2a8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 22));
    // 0x18a2ac: 0x24e70002
    ctx->pc = 0x18a2acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a2b0: 0x1060fff9
    ctx->pc = 0x18A2B0u;
    {
        const bool branch_taken_0x18a2b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x18a2b0) {
            ctx->pc = 0x18A298u;
            goto label_18a298;
        }
    }
    ctx->pc = 0x18A2B8u;
    // 0x18a2b8: 0x24050015
    ctx->pc = 0x18a2b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 21));
    // 0x18a2bc: 0x2406a80b
    ctx->pc = 0x18a2bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294944779));
    // 0x18a2c0: 0x24e40002
    ctx->pc = 0x18a2c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a2c4: 0x0
    ctx->pc = 0x18a2c4u;
    // NOP
label_18a2c8:
    // 0x18a2c8: 0x51100
    ctx->pc = 0x18a2c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x18a2cc: 0x24e70004
    ctx->pc = 0x18a2ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x18a2d0: 0x461825
    ctx->pc = 0x18a2d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18a2d4: 0x24a5ffff
    ctx->pc = 0x18a2d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x18a2d8: 0x3442000a
    ctx->pc = 0x18a2d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 10));
    // 0x18a2dc: 0xa4830000
    ctx->pc = 0x18a2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a2e0: 0xa482fffe
    ctx->pc = 0x18a2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967294), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a2e4: 0x28a20010
    ctx->pc = 0x18a2e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 16));
    // 0x18a2e8: 0x1040fff7
    ctx->pc = 0x18A2E8u;
    {
        const bool branch_taken_0x18a2e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A2ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x18a2e8) {
            ctx->pc = 0x18A2C8u;
            goto label_18a2c8;
        }
    }
    ctx->pc = 0x18A2F0u;
    // 0x18a2f0: 0x24e60002
    ctx->pc = 0x18a2f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a2f4: 0x2409000f
    ctx->pc = 0x18a2f4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18a2f8: 0x240ca00b
    ctx->pc = 0x18a2f8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 4294942731));
    // 0x18a2fc: 0x240b880a
    ctx->pc = 0x18a2fcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294936586));
    // 0x18a300: 0x240aa809
    ctx->pc = 0x18a300u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294944777));
    // 0x18a304: 0xc0402d
    ctx->pc = 0x18a304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18a308:
    // 0x18a308: 0x91100
    ctx->pc = 0x18a308u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 4));
    // 0x18a30c: 0x24e70010
    ctx->pc = 0x18a30cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
    // 0x18a310: 0x4a2025
    ctx->pc = 0x18a310u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18a314: 0x4b2825
    ctx->pc = 0x18a314u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x18a318: 0x34430008
    ctx->pc = 0x18a318u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 8));
    // 0x18a31c: 0x2529ffff
    ctx->pc = 0x18a31cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x18a320: 0xa503fffe
    ctx->pc = 0x18a320u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a324: 0x4c1025
    ctx->pc = 0x18a324u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x18a328: 0xa4c20000
    ctx->pc = 0x18a328u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a32c: 0xa4c50004
    ctx->pc = 0x18a32cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a330: 0x2922000a
    ctx->pc = 0x18a330u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 10));
    // 0x18a334: 0xa4c4000a
    ctx->pc = 0x18a334u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a338: 0xa4c50002
    ctx->pc = 0x18a338u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a33c: 0xa4c40006
    ctx->pc = 0x18a33cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a340: 0xa4c40008
    ctx->pc = 0x18a340u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a344: 0xa504000c
    ctx->pc = 0x18a344u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a348: 0x25080010
    ctx->pc = 0x18a348u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 16));
    // 0x18a34c: 0x1040ffee
    ctx->pc = 0x18A34Cu;
    {
        const bool branch_taken_0x18a34c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A350u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18a34c) {
            ctx->pc = 0x18A308u;
            goto label_18a308;
        }
    }
    ctx->pc = 0x18A354u;
    // 0x18a354: 0x24e60002
    ctx->pc = 0x18a354u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a358: 0x24080009
    ctx->pc = 0x18a358u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 9));
    // 0x18a35c: 0x240ba00a
    ctx->pc = 0x18a35cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294942730));
    // 0x18a360: 0x240a8809
    ctx->pc = 0x18a360u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294936585));
    // 0x18a364: 0x2409a808
    ctx->pc = 0x18a364u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294944776));
    // 0x18a368: 0xc0382d
    ctx->pc = 0x18a368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a36c: 0x0
    ctx->pc = 0x18a36cu;
    // NOP
label_18a370:
    // 0x18a370: 0x81100
    ctx->pc = 0x18a370u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 4));
    // 0x18a374: 0x491825
    ctx->pc = 0x18a374u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x18a378: 0x4a2025
    ctx->pc = 0x18a378u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18a37c: 0x34450007
    ctx->pc = 0x18a37cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 7));
    // 0x18a380: 0x2508ffff
    ctx->pc = 0x18a380u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x18a384: 0xa4e5fffe
    ctx->pc = 0x18a384u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294967294), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a388: 0x4b1025
    ctx->pc = 0x18a388u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x18a38c: 0xa4c50000
    ctx->pc = 0x18a38cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a390: 0xa4c20004
    ctx->pc = 0x18a390u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a394: 0x29050008
    ctx->pc = 0x18a394u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 8), 8));
    // 0x18a398: 0xa4c4000c
    ctx->pc = 0x18a398u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a39c: 0xa4c3001a
    ctx->pc = 0x18a39cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a3a0: 0xa4c20002
    ctx->pc = 0x18a3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a3a4: 0xa4c40006
    ctx->pc = 0x18a3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a3a8: 0xa4c40008
    ctx->pc = 0x18a3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a3ac: 0xa4c4000a
    ctx->pc = 0x18a3acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a3b0: 0xa4c3000e
    ctx->pc = 0x18a3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a3b4: 0xa4c30010
    ctx->pc = 0x18a3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a3b8: 0xa4c30012
    ctx->pc = 0x18a3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a3bc: 0xa4c30014
    ctx->pc = 0x18a3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a3c0: 0xa4c30016
    ctx->pc = 0x18a3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a3c4: 0xa4c30018
    ctx->pc = 0x18a3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a3c8: 0xa4e3001c
    ctx->pc = 0x18a3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a3cc: 0x24e70020
    ctx->pc = 0x18a3ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
    // 0x18a3d0: 0x10a0ffe7
    ctx->pc = 0x18A3D0u;
    {
        const bool branch_taken_0x18a3d0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A3D4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18a3d0) {
            ctx->pc = 0x18A370u;
            goto label_18a370;
        }
    }
    ctx->pc = 0x18A3D8u;
    // 0x18a3d8: 0x3c020024
    ctx->pc = 0x18a3d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18a3dc: 0x24030240
    ctx->pc = 0x18a3dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 576));
    // 0x18a3e0: 0x24471df8
    ctx->pc = 0x18a3e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 7672));
    // 0x18a3e4: 0x24020001
    ctx->pc = 0x18a3e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_18a3e8:
    // 0x18a3e8: 0xa4e30000
    ctx->pc = 0x18a3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a3ec: 0x2442ffff
    ctx->pc = 0x18a3ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a3f0: 0x24e70002
    ctx->pc = 0x18a3f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a3f4: 0x0
    ctx->pc = 0x18a3f4u;
    // NOP
    // 0x18a3f8: 0x0
    ctx->pc = 0x18a3f8u;
    // NOP
    // 0x18a3fc: 0x441fffa
    ctx->pc = 0x18A3FCu;
    {
        const bool branch_taken_0x18a3fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18a3fc) {
            ctx->pc = 0x18A3E8u;
            goto label_18a3e8;
        }
    }
    ctx->pc = 0x18A404u;
    // 0x18a404: 0x24040007
    ctx->pc = 0x18a404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
label_18a408:
    // 0x18a408: 0x41100
    ctx->pc = 0x18a408u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x18a40c: 0x34420005
    ctx->pc = 0x18a40cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 5));
    // 0x18a410: 0x2484ffff
    ctx->pc = 0x18a410u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a414: 0xa4e20000
    ctx->pc = 0x18a414u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a418: 0x28830006
    ctx->pc = 0x18a418u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 6));
    // 0x18a41c: 0x24e70002
    ctx->pc = 0x18a41cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a420: 0x1060fff9
    ctx->pc = 0x18A420u;
    {
        const bool branch_taken_0x18a420 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x18a420) {
            ctx->pc = 0x18A408u;
            goto label_18a408;
        }
    }
    ctx->pc = 0x18A428u;
    // 0x18a428: 0x24050005
    ctx->pc = 0x18a428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x18a42c: 0x2406a805
    ctx->pc = 0x18a42cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294944773));
    // 0x18a430: 0x24e40002
    ctx->pc = 0x18a430u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a434: 0x0
    ctx->pc = 0x18a434u;
    // NOP
label_18a438:
    // 0x18a438: 0x51100
    ctx->pc = 0x18a438u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x18a43c: 0x24e70004
    ctx->pc = 0x18a43cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x18a440: 0x461825
    ctx->pc = 0x18a440u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18a444: 0x24a5ffff
    ctx->pc = 0x18a444u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x18a448: 0x34420004
    ctx->pc = 0x18a448u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
    // 0x18a44c: 0xa4830000
    ctx->pc = 0x18a44cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a450: 0xa482fffe
    ctx->pc = 0x18a450u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967294), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a454: 0x28a20004
    ctx->pc = 0x18a454u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x18a458: 0x1040fff7
    ctx->pc = 0x18A458u;
    {
        const bool branch_taken_0x18a458 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A45Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x18a458) {
            ctx->pc = 0x18A438u;
            goto label_18a438;
        }
    }
    ctx->pc = 0x18A460u;
    // 0x18a460: 0x24e60002
    ctx->pc = 0x18a460u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a464: 0x24080003
    ctx->pc = 0x18a464u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a468: 0x240a8805
    ctx->pc = 0x18a468u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294936581));
    // 0x18a46c: 0x2409a804
    ctx->pc = 0x18a46cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294944772));
    // 0x18a470: 0xc0282d
    ctx->pc = 0x18a470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a474: 0x0
    ctx->pc = 0x18a474u;
    // NOP
label_18a478:
    // 0x18a478: 0x81100
    ctx->pc = 0x18a478u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 4));
    // 0x18a47c: 0x24e70008
    ctx->pc = 0x18a47cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x18a480: 0x492025
    ctx->pc = 0x18a480u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x18a484: 0x34430003
    ctx->pc = 0x18a484u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 3));
    // 0x18a488: 0xa4a3fffe
    ctx->pc = 0x18a488u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a48c: 0x4a1025
    ctx->pc = 0x18a48cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18a490: 0xa4c20000
    ctx->pc = 0x18a490u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a494: 0x2508ffff
    ctx->pc = 0x18a494u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x18a498: 0xa4c40002
    ctx->pc = 0x18a498u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a49c: 0x29020002
    ctx->pc = 0x18a49cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 2));
    // 0x18a4a0: 0xa4a40004
    ctx->pc = 0x18a4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a4a4: 0x24a50008
    ctx->pc = 0x18a4a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x18a4a8: 0x1040fff3
    ctx->pc = 0x18A4A8u;
    {
        const bool branch_taken_0x18a4a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A4ACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18a4a8) {
            ctx->pc = 0x18A478u;
            goto label_18a478;
        }
    }
    ctx->pc = 0x18A4B0u;
    // 0x18a4b0: 0x24e60002
    ctx->pc = 0x18a4b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 2));
    // 0x18a4b4: 0x240aa004
    ctx->pc = 0x18a4b4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294942724));
    // 0x18a4b8: 0x24070001
    ctx->pc = 0x18a4b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a4bc: 0x24098803
    ctx->pc = 0x18a4bcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294936579));
    // 0x18a4c0: 0x2408a802
    ctx->pc = 0x18a4c0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294944770));
    // 0x18a4c4: 0x0
    ctx->pc = 0x18a4c4u;
    // NOP
label_18a4c8:
    // 0x18a4c8: 0x71100
    ctx->pc = 0x18a4c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 4));
    // 0x18a4cc: 0x481825
    ctx->pc = 0x18a4ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a4d0: 0x492025
    ctx->pc = 0x18a4d0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x18a4d4: 0x34450001
    ctx->pc = 0x18a4d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 1));
    // 0x18a4d8: 0xa4c4000c
    ctx->pc = 0x18a4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a4dc: 0x4a1025
    ctx->pc = 0x18a4dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18a4e0: 0xa4c50000
    ctx->pc = 0x18a4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a4e4: 0xa4c20004
    ctx->pc = 0x18a4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a4e8: 0x24e7ffff
    ctx->pc = 0x18a4e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x18a4ec: 0xa4c3001c
    ctx->pc = 0x18a4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a4f0: 0xa4c5fffe
    ctx->pc = 0x18a4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967294), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a4f4: 0xa4c20002
    ctx->pc = 0x18a4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a4f8: 0xa4c40006
    ctx->pc = 0x18a4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a4fc: 0xa4c40008
    ctx->pc = 0x18a4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a500: 0xa4c4000a
    ctx->pc = 0x18a500u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a504: 0xa4c3000e
    ctx->pc = 0x18a504u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a508: 0xa4c30010
    ctx->pc = 0x18a508u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a50c: 0xa4c30012
    ctx->pc = 0x18a50cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a510: 0xa4c30014
    ctx->pc = 0x18a510u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a514: 0xa4c30016
    ctx->pc = 0x18a514u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a518: 0xa4c30018
    ctx->pc = 0x18a518u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a51c: 0xa4c3001a
    ctx->pc = 0x18a51cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a520: 0x1ce0ffe9
    ctx->pc = 0x18A520u;
    {
        const bool branch_taken_0x18a520 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x18A524u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x18a520) {
            ctx->pc = 0x18A4C8u;
            goto label_18a4c8;
        }
    }
    ctx->pc = 0x18A528u;
    // 0x18a528: 0x3e00008
    ctx->pc = 0x18A528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A1D8u: goto label_18a1d8;
            case 0x18A200u: goto label_18a200;
            case 0x18A228u: goto label_18a228;
            case 0x18A250u: goto label_18a250;
            case 0x18A278u: goto label_18a278;
            case 0x18A298u: goto label_18a298;
            case 0x18A2C8u: goto label_18a2c8;
            case 0x18A308u: goto label_18a308;
            case 0x18A370u: goto label_18a370;
            case 0x18A3E8u: goto label_18a3e8;
            case 0x18A408u: goto label_18a408;
            case 0x18A438u: goto label_18a438;
            case 0x18A478u: goto label_18a478;
            case 0x18A4C8u: goto label_18a4c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A530u;
}
