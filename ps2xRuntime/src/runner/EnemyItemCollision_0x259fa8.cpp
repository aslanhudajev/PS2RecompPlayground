#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyItemCollision
// Address: 0x259fa8 - 0x25a16c
void EnemyItemCollision_0x259fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x259fa8u;

label_259fa8:
    // 0x259fa8: 0x27bdffb0
    ctx->pc = 0x259fa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_259fac:
    // 0x259fac: 0xffbf0040
    ctx->pc = 0x259facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_259fb0:
    // 0x259fb0: 0xffb10030
    ctx->pc = 0x259fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_259fb4:
    // 0x259fb4: 0xffb00020
    ctx->pc = 0x259fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_259fb8:
    // 0x259fb8: 0xa0882d
    ctx->pc = 0x259fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_259fbc:
    // 0x259fbc: 0x8e250000
    ctx->pc = 0x259fbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259fc0:
    // 0x259fc0: 0x4800007
label_259fc4:
    if (ctx->pc == 0x259FC4u) {
        ctx->pc = 0x259FC4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x259FC8u;
        goto label_259fc8;
    }
    ctx->pc = 0x259FC0u;
    {
        const bool branch_taken_0x259fc0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x259FC4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x259fc0) {
            ctx->pc = 0x259FE0u;
            goto label_259fe0;
        }
    }
    ctx->pc = 0x259FC8u;
label_259fc8:
    // 0x259fc8: 0x240303b0
    ctx->pc = 0x259fc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
label_259fcc:
    // 0x259fcc: 0x831818
    ctx->pc = 0x259fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_259fd0:
    // 0x259fd0: 0x3c020033
    ctx->pc = 0x259fd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_259fd4:
    // 0x259fd4: 0x2442dfd0
    ctx->pc = 0x259fd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
label_259fd8:
    // 0x259fd8: 0x10000002
label_259fdc:
    if (ctx->pc == 0x259FDCu) {
        ctx->pc = 0x259FDCu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x259FE0u;
        goto label_259fe0;
    }
    ctx->pc = 0x259FD8u;
    {
        const bool branch_taken_0x259fd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x259FDCu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x259fd8) {
            ctx->pc = 0x259FE4u;
            goto label_259fe4;
        }
    }
    ctx->pc = 0x259FE0u;
label_259fe0:
    // 0x259fe0: 0x802d
    ctx->pc = 0x259fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259fe4:
    // 0x259fe4: 0x8ca20000
    ctx->pc = 0x259fe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_259fe8:
    // 0x259fe8: 0x2443ffff
    ctx->pc = 0x259fe8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_259fec:
    // 0x259fec: 0x2c62000c
    ctx->pc = 0x259fecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 12));
label_259ff0:
    // 0x259ff0: 0x10400058
label_259ff4:
    if (ctx->pc == 0x259FF4u) {
        ctx->pc = 0x259FF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x259FF8u;
        goto label_259ff8;
    }
    ctx->pc = 0x259FF0u;
    {
        const bool branch_taken_0x259ff0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x259FF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x259ff0) {
            ctx->pc = 0x25A154u;
            goto label_25a154;
        }
    }
    ctx->pc = 0x259FF8u;
label_259ff8:
    // 0x259ff8: 0x3c02003b
    ctx->pc = 0x259ff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_259ffc:
    // 0x259ffc: 0x24428e10
    ctx->pc = 0x259ffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938128));
label_25a000:
    // 0x25a000: 0x31880
    ctx->pc = 0x25a000u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_25a004:
    // 0x25a004: 0x621821
    ctx->pc = 0x25a004u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25a008:
    // 0x25a008: 0x8c620000
    ctx->pc = 0x25a008u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25a00c:
    // 0x25a00c: 0x400008
label_25a010:
    if (ctx->pc == 0x25A010u) {
        ctx->pc = 0x25A014u;
        goto label_25a014;
    }
    ctx->pc = 0x25A00Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259FA8u: goto label_259fa8;
            case 0x259FACu: goto label_259fac;
            case 0x259FB0u: goto label_259fb0;
            case 0x259FB4u: goto label_259fb4;
            case 0x259FB8u: goto label_259fb8;
            case 0x259FBCu: goto label_259fbc;
            case 0x259FC0u: goto label_259fc0;
            case 0x259FC4u: goto label_259fc4;
            case 0x259FC8u: goto label_259fc8;
            case 0x259FCCu: goto label_259fcc;
            case 0x259FD0u: goto label_259fd0;
            case 0x259FD4u: goto label_259fd4;
            case 0x259FD8u: goto label_259fd8;
            case 0x259FDCu: goto label_259fdc;
            case 0x259FE0u: goto label_259fe0;
            case 0x259FE4u: goto label_259fe4;
            case 0x259FE8u: goto label_259fe8;
            case 0x259FECu: goto label_259fec;
            case 0x259FF0u: goto label_259ff0;
            case 0x259FF4u: goto label_259ff4;
            case 0x259FF8u: goto label_259ff8;
            case 0x259FFCu: goto label_259ffc;
            case 0x25A000u: goto label_25a000;
            case 0x25A004u: goto label_25a004;
            case 0x25A008u: goto label_25a008;
            case 0x25A00Cu: goto label_25a00c;
            case 0x25A010u: goto label_25a010;
            case 0x25A014u: goto label_25a014;
            case 0x25A018u: goto label_25a018;
            case 0x25A01Cu: goto label_25a01c;
            case 0x25A020u: goto label_25a020;
            case 0x25A024u: goto label_25a024;
            case 0x25A028u: goto label_25a028;
            case 0x25A02Cu: goto label_25a02c;
            case 0x25A030u: goto label_25a030;
            case 0x25A034u: goto label_25a034;
            case 0x25A038u: goto label_25a038;
            case 0x25A03Cu: goto label_25a03c;
            case 0x25A040u: goto label_25a040;
            case 0x25A044u: goto label_25a044;
            case 0x25A048u: goto label_25a048;
            case 0x25A04Cu: goto label_25a04c;
            case 0x25A050u: goto label_25a050;
            case 0x25A054u: goto label_25a054;
            case 0x25A058u: goto label_25a058;
            case 0x25A05Cu: goto label_25a05c;
            case 0x25A060u: goto label_25a060;
            case 0x25A064u: goto label_25a064;
            case 0x25A068u: goto label_25a068;
            case 0x25A06Cu: goto label_25a06c;
            case 0x25A070u: goto label_25a070;
            case 0x25A074u: goto label_25a074;
            case 0x25A078u: goto label_25a078;
            case 0x25A07Cu: goto label_25a07c;
            case 0x25A080u: goto label_25a080;
            case 0x25A084u: goto label_25a084;
            case 0x25A088u: goto label_25a088;
            case 0x25A08Cu: goto label_25a08c;
            case 0x25A090u: goto label_25a090;
            case 0x25A094u: goto label_25a094;
            case 0x25A098u: goto label_25a098;
            case 0x25A09Cu: goto label_25a09c;
            case 0x25A0A0u: goto label_25a0a0;
            case 0x25A0A4u: goto label_25a0a4;
            case 0x25A0A8u: goto label_25a0a8;
            case 0x25A0ACu: goto label_25a0ac;
            case 0x25A0B0u: goto label_25a0b0;
            case 0x25A0B4u: goto label_25a0b4;
            case 0x25A0B8u: goto label_25a0b8;
            case 0x25A0BCu: goto label_25a0bc;
            case 0x25A0C0u: goto label_25a0c0;
            case 0x25A0C4u: goto label_25a0c4;
            case 0x25A0C8u: goto label_25a0c8;
            case 0x25A0CCu: goto label_25a0cc;
            case 0x25A0D0u: goto label_25a0d0;
            case 0x25A0D4u: goto label_25a0d4;
            case 0x25A0D8u: goto label_25a0d8;
            case 0x25A0DCu: goto label_25a0dc;
            case 0x25A0E0u: goto label_25a0e0;
            case 0x25A0E4u: goto label_25a0e4;
            case 0x25A0E8u: goto label_25a0e8;
            case 0x25A0ECu: goto label_25a0ec;
            case 0x25A0F0u: goto label_25a0f0;
            case 0x25A0F4u: goto label_25a0f4;
            case 0x25A0F8u: goto label_25a0f8;
            case 0x25A0FCu: goto label_25a0fc;
            case 0x25A100u: goto label_25a100;
            case 0x25A104u: goto label_25a104;
            case 0x25A108u: goto label_25a108;
            case 0x25A10Cu: goto label_25a10c;
            case 0x25A110u: goto label_25a110;
            case 0x25A114u: goto label_25a114;
            case 0x25A118u: goto label_25a118;
            case 0x25A11Cu: goto label_25a11c;
            case 0x25A120u: goto label_25a120;
            case 0x25A124u: goto label_25a124;
            case 0x25A128u: goto label_25a128;
            case 0x25A12Cu: goto label_25a12c;
            case 0x25A130u: goto label_25a130;
            case 0x25A134u: goto label_25a134;
            case 0x25A138u: goto label_25a138;
            case 0x25A13Cu: goto label_25a13c;
            case 0x25A140u: goto label_25a140;
            case 0x25A144u: goto label_25a144;
            case 0x25A148u: goto label_25a148;
            case 0x25A14Cu: goto label_25a14c;
            case 0x25A150u: goto label_25a150;
            case 0x25A154u: goto label_25a154;
            case 0x25A158u: goto label_25a158;
            case 0x25A15Cu: goto label_25a15c;
            case 0x25A160u: goto label_25a160;
            case 0x25A164u: goto label_25a164;
            case 0x25A168u: goto label_25a168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A014u;
label_25a014:
    // 0x25a014: 0x8cc20000
    ctx->pc = 0x25a014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_25a018:
    // 0x25a018: 0x2443ffd8
    ctx->pc = 0x25a018u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967256));
label_25a01c:
    // 0x25a01c: 0x2c62000e
    ctx->pc = 0x25a01cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 14));
label_25a020:
    // 0x25a020: 0x1040000c
label_25a024:
    if (ctx->pc == 0x25A024u) {
        ctx->pc = 0x25A024u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x25A028u;
        goto label_25a028;
    }
    ctx->pc = 0x25A020u;
    {
        const bool branch_taken_0x25a020 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A024u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x25a020) {
            ctx->pc = 0x25A054u;
            goto label_25a054;
        }
    }
    ctx->pc = 0x25A028u;
label_25a028:
    // 0x25a028: 0x24428e40
    ctx->pc = 0x25a028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938176));
label_25a02c:
    // 0x25a02c: 0x31880
    ctx->pc = 0x25a02cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_25a030:
    // 0x25a030: 0x621821
    ctx->pc = 0x25a030u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25a034:
    // 0x25a034: 0x8c620000
    ctx->pc = 0x25a034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25a038:
    // 0x25a038: 0x400008
label_25a03c:
    if (ctx->pc == 0x25A03Cu) {
        ctx->pc = 0x25A040u;
        goto label_25a040;
    }
    ctx->pc = 0x25A038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259FA8u: goto label_259fa8;
            case 0x259FACu: goto label_259fac;
            case 0x259FB0u: goto label_259fb0;
            case 0x259FB4u: goto label_259fb4;
            case 0x259FB8u: goto label_259fb8;
            case 0x259FBCu: goto label_259fbc;
            case 0x259FC0u: goto label_259fc0;
            case 0x259FC4u: goto label_259fc4;
            case 0x259FC8u: goto label_259fc8;
            case 0x259FCCu: goto label_259fcc;
            case 0x259FD0u: goto label_259fd0;
            case 0x259FD4u: goto label_259fd4;
            case 0x259FD8u: goto label_259fd8;
            case 0x259FDCu: goto label_259fdc;
            case 0x259FE0u: goto label_259fe0;
            case 0x259FE4u: goto label_259fe4;
            case 0x259FE8u: goto label_259fe8;
            case 0x259FECu: goto label_259fec;
            case 0x259FF0u: goto label_259ff0;
            case 0x259FF4u: goto label_259ff4;
            case 0x259FF8u: goto label_259ff8;
            case 0x259FFCu: goto label_259ffc;
            case 0x25A000u: goto label_25a000;
            case 0x25A004u: goto label_25a004;
            case 0x25A008u: goto label_25a008;
            case 0x25A00Cu: goto label_25a00c;
            case 0x25A010u: goto label_25a010;
            case 0x25A014u: goto label_25a014;
            case 0x25A018u: goto label_25a018;
            case 0x25A01Cu: goto label_25a01c;
            case 0x25A020u: goto label_25a020;
            case 0x25A024u: goto label_25a024;
            case 0x25A028u: goto label_25a028;
            case 0x25A02Cu: goto label_25a02c;
            case 0x25A030u: goto label_25a030;
            case 0x25A034u: goto label_25a034;
            case 0x25A038u: goto label_25a038;
            case 0x25A03Cu: goto label_25a03c;
            case 0x25A040u: goto label_25a040;
            case 0x25A044u: goto label_25a044;
            case 0x25A048u: goto label_25a048;
            case 0x25A04Cu: goto label_25a04c;
            case 0x25A050u: goto label_25a050;
            case 0x25A054u: goto label_25a054;
            case 0x25A058u: goto label_25a058;
            case 0x25A05Cu: goto label_25a05c;
            case 0x25A060u: goto label_25a060;
            case 0x25A064u: goto label_25a064;
            case 0x25A068u: goto label_25a068;
            case 0x25A06Cu: goto label_25a06c;
            case 0x25A070u: goto label_25a070;
            case 0x25A074u: goto label_25a074;
            case 0x25A078u: goto label_25a078;
            case 0x25A07Cu: goto label_25a07c;
            case 0x25A080u: goto label_25a080;
            case 0x25A084u: goto label_25a084;
            case 0x25A088u: goto label_25a088;
            case 0x25A08Cu: goto label_25a08c;
            case 0x25A090u: goto label_25a090;
            case 0x25A094u: goto label_25a094;
            case 0x25A098u: goto label_25a098;
            case 0x25A09Cu: goto label_25a09c;
            case 0x25A0A0u: goto label_25a0a0;
            case 0x25A0A4u: goto label_25a0a4;
            case 0x25A0A8u: goto label_25a0a8;
            case 0x25A0ACu: goto label_25a0ac;
            case 0x25A0B0u: goto label_25a0b0;
            case 0x25A0B4u: goto label_25a0b4;
            case 0x25A0B8u: goto label_25a0b8;
            case 0x25A0BCu: goto label_25a0bc;
            case 0x25A0C0u: goto label_25a0c0;
            case 0x25A0C4u: goto label_25a0c4;
            case 0x25A0C8u: goto label_25a0c8;
            case 0x25A0CCu: goto label_25a0cc;
            case 0x25A0D0u: goto label_25a0d0;
            case 0x25A0D4u: goto label_25a0d4;
            case 0x25A0D8u: goto label_25a0d8;
            case 0x25A0DCu: goto label_25a0dc;
            case 0x25A0E0u: goto label_25a0e0;
            case 0x25A0E4u: goto label_25a0e4;
            case 0x25A0E8u: goto label_25a0e8;
            case 0x25A0ECu: goto label_25a0ec;
            case 0x25A0F0u: goto label_25a0f0;
            case 0x25A0F4u: goto label_25a0f4;
            case 0x25A0F8u: goto label_25a0f8;
            case 0x25A0FCu: goto label_25a0fc;
            case 0x25A100u: goto label_25a100;
            case 0x25A104u: goto label_25a104;
            case 0x25A108u: goto label_25a108;
            case 0x25A10Cu: goto label_25a10c;
            case 0x25A110u: goto label_25a110;
            case 0x25A114u: goto label_25a114;
            case 0x25A118u: goto label_25a118;
            case 0x25A11Cu: goto label_25a11c;
            case 0x25A120u: goto label_25a120;
            case 0x25A124u: goto label_25a124;
            case 0x25A128u: goto label_25a128;
            case 0x25A12Cu: goto label_25a12c;
            case 0x25A130u: goto label_25a130;
            case 0x25A134u: goto label_25a134;
            case 0x25A138u: goto label_25a138;
            case 0x25A13Cu: goto label_25a13c;
            case 0x25A140u: goto label_25a140;
            case 0x25A144u: goto label_25a144;
            case 0x25A148u: goto label_25a148;
            case 0x25A14Cu: goto label_25a14c;
            case 0x25A150u: goto label_25a150;
            case 0x25A154u: goto label_25a154;
            case 0x25A158u: goto label_25a158;
            case 0x25A15Cu: goto label_25a15c;
            case 0x25A160u: goto label_25a160;
            case 0x25A164u: goto label_25a164;
            case 0x25A168u: goto label_25a168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A040u;
label_25a040:
    // 0x25a040: 0x862200f2
    ctx->pc = 0x25a040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 242)));
label_25a044:
    // 0x25a044: 0x24030001
    ctx->pc = 0x25a044u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_25a048:
    // 0x25a048: 0x28420001
    ctx->pc = 0x25a048u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
label_25a04c:
    // 0x25a04c: 0x10000041
label_25a050:
    if (ctx->pc == 0x25A050u) {
        ctx->pc = 0x25A050u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
        ctx->pc = 0x25A054u;
        goto label_25a054;
    }
    ctx->pc = 0x25A04Cu;
    {
        const bool branch_taken_0x25a04c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A050u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
        if (branch_taken_0x25a04c) {
            ctx->pc = 0x25A154u;
            goto label_25a154;
        }
    }
    ctx->pc = 0x25A054u;
label_25a054:
    // 0x25a054: 0x1000003f
label_25a058:
    if (ctx->pc == 0x25A058u) {
        ctx->pc = 0x25A058u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25A05Cu;
        goto label_25a05c;
    }
    ctx->pc = 0x25A054u;
    {
        const bool branch_taken_0x25a054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A058u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25a054) {
            ctx->pc = 0x25A154u;
            goto label_25a154;
        }
    }
    ctx->pc = 0x25A05Cu;
label_25a05c:
    // 0x25a05c: 0x1200003d
label_25a060:
    if (ctx->pc == 0x25A060u) {
        ctx->pc = 0x25A060u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x25A064u;
        goto label_25a064;
    }
    ctx->pc = 0x25A05Cu;
    {
        const bool branch_taken_0x25a05c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A060u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x25a05c) {
            ctx->pc = 0x25A154u;
            goto label_25a154;
        }
    }
    ctx->pc = 0x25A064u;
label_25a064:
    // 0x25a064: 0x8e030000
    ctx->pc = 0x25a064u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25a068:
    // 0x25a068: 0x10620039
label_25a06c:
    if (ctx->pc == 0x25A06Cu) {
        ctx->pc = 0x25A06Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x25A070u;
        goto label_25a070;
    }
    ctx->pc = 0x25A068u;
    {
        const bool branch_taken_0x25a068 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25A06Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x25a068) {
            ctx->pc = 0x25A150u;
            goto label_25a150;
        }
    }
    ctx->pc = 0x25A070u;
label_25a070:
    // 0x25a070: 0x14620039
label_25a074:
    if (ctx->pc == 0x25A074u) {
        ctx->pc = 0x25A074u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A078u;
        goto label_25a078;
    }
    ctx->pc = 0x25A070u;
    {
        const bool branch_taken_0x25a070 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25A074u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a070) {
            ctx->pc = 0x25A158u;
            goto label_25a158;
        }
    }
    ctx->pc = 0x25A078u;
label_25a078:
    // 0x25a078: 0x10000036
label_25a07c:
    if (ctx->pc == 0x25A07Cu) {
        ctx->pc = 0x25A07Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A080u;
        goto label_25a080;
    }
    ctx->pc = 0x25A078u;
    {
        const bool branch_taken_0x25a078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A07Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a078) {
            ctx->pc = 0x25A154u;
            goto label_25a154;
        }
    }
    ctx->pc = 0x25A080u;
label_25a080:
    // 0x25a080: 0x12000035
label_25a084:
    if (ctx->pc == 0x25A084u) {
        ctx->pc = 0x25A084u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A088u;
        goto label_25a088;
    }
    ctx->pc = 0x25A080u;
    {
        const bool branch_taken_0x25a080 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A084u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a080) {
            ctx->pc = 0x25A158u;
            goto label_25a158;
        }
    }
    ctx->pc = 0x25A088u;
label_25a088:
    // 0x25a088: 0xc096176
label_25a08c:
    if (ctx->pc == 0x25A08Cu) {
        ctx->pc = 0x25A08Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A090u;
        goto label_25a090;
    }
    ctx->pc = 0x25A088u;
    SET_GPR_U32(ctx, 31, 0x25A090u);
    ctx->pc = 0x25A08Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2585D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlatGenerator_0x2585d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A090u; }
    }
    if (ctx->pc != 0x25A090u) { return; }
    ctx->pc = 0x25A090u;
label_25a090:
    // 0x25a090: 0x2c440001
    ctx->pc = 0x25a090u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 2), 1));
label_25a094:
    // 0x25a094: 0x862200f0
    ctx->pc = 0x25a094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
label_25a098:
    // 0x25a098: 0x38420011
    ctx->pc = 0x25a098u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 17));
label_25a09c:
    // 0x25a09c: 0x2200a
    ctx->pc = 0x25a09cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_25a0a0:
    // 0x25a0a0: 0x8e030000
    ctx->pc = 0x25a0a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25a0a4:
    // 0x25a0a4: 0x2402001d
    ctx->pc = 0x25a0a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
label_25a0a8:
    // 0x25a0a8: 0x10620003
label_25a0ac:
    if (ctx->pc == 0x25A0ACu) {
        ctx->pc = 0x25A0ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x25A0B0u;
        goto label_25a0b0;
    }
    ctx->pc = 0x25A0A8u;
    {
        const bool branch_taken_0x25a0a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25A0ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x25a0a8) {
            ctx->pc = 0x25A0B8u;
            goto label_25a0b8;
        }
    }
    ctx->pc = 0x25A0B0u;
label_25a0b0:
    // 0x25a0b0: 0x14620029
label_25a0b4:
    if (ctx->pc == 0x25A0B4u) {
        ctx->pc = 0x25A0B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A0B8u;
        goto label_25a0b8;
    }
    ctx->pc = 0x25A0B0u;
    {
        const bool branch_taken_0x25a0b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25A0B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a0b0) {
            ctx->pc = 0x25A158u;
            goto label_25a158;
        }
    }
    ctx->pc = 0x25A0B8u;
label_25a0b8:
    // 0x25a0b8: 0x8e220000
    ctx->pc = 0x25a0b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a0bc:
    // 0x25a0bc: 0xc4410010
    ctx->pc = 0x25a0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25a0c0:
    // 0x25a0c0: 0x3c014040
    ctx->pc = 0x25a0c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_25a0c4:
    // 0x25a0c4: 0x44810000
    ctx->pc = 0x25a0c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_25a0c8:
    // 0x25a0c8: 0x46000836
    ctx->pc = 0x25a0c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25a0cc:
    // 0x25a0cc: 0x0
    ctx->pc = 0x25a0ccu;
    // NOP
label_25a0d0:
    // 0x25a0d0: 0x45000021
label_25a0d4:
    if (ctx->pc == 0x25A0D4u) {
        ctx->pc = 0x25A0D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A0D8u;
        goto label_25a0d8;
    }
    ctx->pc = 0x25A0D0u;
    {
        const bool branch_taken_0x25a0d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A0D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a0d0) {
            ctx->pc = 0x25A158u;
            goto label_25a158;
        }
    }
    ctx->pc = 0x25A0D8u;
label_25a0d8:
    // 0x25a0d8: 0x1000001e
label_25a0dc:
    if (ctx->pc == 0x25A0DCu) {
        ctx->pc = 0x25A0DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A0E0u;
        goto label_25a0e0;
    }
    ctx->pc = 0x25A0D8u;
    {
        const bool branch_taken_0x25a0d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A0DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a0d8) {
            ctx->pc = 0x25A154u;
            goto label_25a154;
        }
    }
    ctx->pc = 0x25A0E0u;
label_25a0e0:
    // 0x25a0e0: 0x1200001d
label_25a0e4:
    if (ctx->pc == 0x25A0E4u) {
        ctx->pc = 0x25A0E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A0E8u;
        goto label_25a0e8;
    }
    ctx->pc = 0x25A0E0u;
    {
        const bool branch_taken_0x25a0e0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x25A0E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a0e0) {
            ctx->pc = 0x25A158u;
            goto label_25a158;
        }
    }
    ctx->pc = 0x25A0E8u;
label_25a0e8:
    // 0x25a0e8: 0x8e030000
    ctx->pc = 0x25a0e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25a0ec:
    // 0x25a0ec: 0x2462ffe3
    ctx->pc = 0x25a0ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967267));
label_25a0f0:
    // 0x25a0f0: 0x2c420002
    ctx->pc = 0x25a0f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_25a0f4:
    // 0x25a0f4: 0x54400017
label_25a0f8:
    if (ctx->pc == 0x25A0F8u) {
        ctx->pc = 0x25A0F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A0FCu;
        goto label_25a0fc;
    }
    ctx->pc = 0x25A0F4u;
    {
        const bool branch_taken_0x25a0f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25a0f4) {
            ctx->pc = 0x25A0F8u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x25A154u;
            goto label_25a154;
        }
    }
    ctx->pc = 0x25A0FCu;
label_25a0fc:
    // 0x25a0fc: 0x24020020
    ctx->pc = 0x25a0fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_25a100:
    // 0x25a100: 0x10620013
label_25a104:
    if (ctx->pc == 0x25A104u) {
        ctx->pc = 0x25A104u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x25A108u;
        goto label_25a108;
    }
    ctx->pc = 0x25A100u;
    {
        const bool branch_taken_0x25a100 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25A104u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x25a100) {
            ctx->pc = 0x25A150u;
            goto label_25a150;
        }
    }
    ctx->pc = 0x25A108u;
label_25a108:
    // 0x25a108: 0x50620004
label_25a10c:
    if (ctx->pc == 0x25A10Cu) {
        ctx->pc = 0x25A10Cu;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->pc = 0x25A110u;
        goto label_25a110;
    }
    ctx->pc = 0x25A108u;
    {
        const bool branch_taken_0x25a108 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x25a108) {
            ctx->pc = 0x25A10Cu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->pc = 0x25A11Cu;
            goto label_25a11c;
        }
    }
    ctx->pc = 0x25A110u;
label_25a110:
    // 0x25a110: 0x14600011
label_25a114:
    if (ctx->pc == 0x25A114u) {
        ctx->pc = 0x25A114u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A118u;
        goto label_25a118;
    }
    ctx->pc = 0x25A110u;
    {
        const bool branch_taken_0x25a110 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x25A114u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a110) {
            ctx->pc = 0x25A158u;
            goto label_25a158;
        }
    }
    ctx->pc = 0x25A118u;
label_25a118:
    // 0x25a118: 0x822300dc
    ctx->pc = 0x25a118u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 220)));
label_25a11c:
    // 0x25a11c: 0x24020002
    ctx->pc = 0x25a11cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_25a120:
    // 0x25a120: 0x10620003
label_25a124:
    if (ctx->pc == 0x25A124u) {
        ctx->pc = 0x25A124u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x25A128u;
        goto label_25a128;
    }
    ctx->pc = 0x25A120u;
    {
        const bool branch_taken_0x25a120 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25A124u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x25a120) {
            ctx->pc = 0x25A130u;
            goto label_25a130;
        }
    }
    ctx->pc = 0x25A128u;
label_25a128:
    // 0x25a128: 0x1462000a
label_25a12c:
    if (ctx->pc == 0x25A12Cu) {
        ctx->pc = 0x25A12Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25A130u;
        goto label_25a130;
    }
    ctx->pc = 0x25A128u;
    {
        const bool branch_taken_0x25a128 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25A12Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a128) {
            ctx->pc = 0x25A154u;
            goto label_25a154;
        }
    }
    ctx->pc = 0x25A130u;
label_25a130:
    // 0x25a130: 0x200202d
    ctx->pc = 0x25a130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a134:
    // 0x25a134: 0xc62c00f0
    ctx->pc = 0x25a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25a138:
    // 0x25a138: 0x2405ffff
    ctx->pc = 0x25a138u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25a13c:
    // 0x25a13c: 0x302d
    ctx->pc = 0x25a13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a140:
    // 0x25a140: 0x26070050
    ctx->pc = 0x25a140u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 80));
label_25a144:
    // 0x25a144: 0x402d
    ctx->pc = 0x25a144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a148:
    // 0x25a148: 0xc08e7bc
label_25a14c:
    if (ctx->pc == 0x25A14Cu) {
        ctx->pc = 0x25A14Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25A150u;
        goto label_25a150;
    }
    ctx->pc = 0x25A148u;
    SET_GPR_U32(ctx, 31, 0x25A150u);
    ctx->pc = 0x25A14Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x239EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_enemy_0x239ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A150u; }
    }
    if (ctx->pc != 0x25A150u) { return; }
    ctx->pc = 0x25A150u;
label_25a150:
    // 0x25a150: 0x202d
    ctx->pc = 0x25a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a154:
    // 0x25a154: 0x80102d
    ctx->pc = 0x25a154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25a158:
    // 0x25a158: 0xdfbf0040
    ctx->pc = 0x25a158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25a15c:
    // 0x25a15c: 0xdfb10030
    ctx->pc = 0x25a15cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25a160:
    // 0x25a160: 0xdfb00020
    ctx->pc = 0x25a160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25a164:
    // 0x25a164: 0x3e00008
label_25a168:
    if (ctx->pc == 0x25A168u) {
        ctx->pc = 0x25A168u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x25A16Cu;
        goto label_fallthrough_0x25a164;
    }
    ctx->pc = 0x25A164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A168u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x259FA8u: goto label_259fa8;
            case 0x259FACu: goto label_259fac;
            case 0x259FB0u: goto label_259fb0;
            case 0x259FB4u: goto label_259fb4;
            case 0x259FB8u: goto label_259fb8;
            case 0x259FBCu: goto label_259fbc;
            case 0x259FC0u: goto label_259fc0;
            case 0x259FC4u: goto label_259fc4;
            case 0x259FC8u: goto label_259fc8;
            case 0x259FCCu: goto label_259fcc;
            case 0x259FD0u: goto label_259fd0;
            case 0x259FD4u: goto label_259fd4;
            case 0x259FD8u: goto label_259fd8;
            case 0x259FDCu: goto label_259fdc;
            case 0x259FE0u: goto label_259fe0;
            case 0x259FE4u: goto label_259fe4;
            case 0x259FE8u: goto label_259fe8;
            case 0x259FECu: goto label_259fec;
            case 0x259FF0u: goto label_259ff0;
            case 0x259FF4u: goto label_259ff4;
            case 0x259FF8u: goto label_259ff8;
            case 0x259FFCu: goto label_259ffc;
            case 0x25A000u: goto label_25a000;
            case 0x25A004u: goto label_25a004;
            case 0x25A008u: goto label_25a008;
            case 0x25A00Cu: goto label_25a00c;
            case 0x25A010u: goto label_25a010;
            case 0x25A014u: goto label_25a014;
            case 0x25A018u: goto label_25a018;
            case 0x25A01Cu: goto label_25a01c;
            case 0x25A020u: goto label_25a020;
            case 0x25A024u: goto label_25a024;
            case 0x25A028u: goto label_25a028;
            case 0x25A02Cu: goto label_25a02c;
            case 0x25A030u: goto label_25a030;
            case 0x25A034u: goto label_25a034;
            case 0x25A038u: goto label_25a038;
            case 0x25A03Cu: goto label_25a03c;
            case 0x25A040u: goto label_25a040;
            case 0x25A044u: goto label_25a044;
            case 0x25A048u: goto label_25a048;
            case 0x25A04Cu: goto label_25a04c;
            case 0x25A050u: goto label_25a050;
            case 0x25A054u: goto label_25a054;
            case 0x25A058u: goto label_25a058;
            case 0x25A05Cu: goto label_25a05c;
            case 0x25A060u: goto label_25a060;
            case 0x25A064u: goto label_25a064;
            case 0x25A068u: goto label_25a068;
            case 0x25A06Cu: goto label_25a06c;
            case 0x25A070u: goto label_25a070;
            case 0x25A074u: goto label_25a074;
            case 0x25A078u: goto label_25a078;
            case 0x25A07Cu: goto label_25a07c;
            case 0x25A080u: goto label_25a080;
            case 0x25A084u: goto label_25a084;
            case 0x25A088u: goto label_25a088;
            case 0x25A08Cu: goto label_25a08c;
            case 0x25A090u: goto label_25a090;
            case 0x25A094u: goto label_25a094;
            case 0x25A098u: goto label_25a098;
            case 0x25A09Cu: goto label_25a09c;
            case 0x25A0A0u: goto label_25a0a0;
            case 0x25A0A4u: goto label_25a0a4;
            case 0x25A0A8u: goto label_25a0a8;
            case 0x25A0ACu: goto label_25a0ac;
            case 0x25A0B0u: goto label_25a0b0;
            case 0x25A0B4u: goto label_25a0b4;
            case 0x25A0B8u: goto label_25a0b8;
            case 0x25A0BCu: goto label_25a0bc;
            case 0x25A0C0u: goto label_25a0c0;
            case 0x25A0C4u: goto label_25a0c4;
            case 0x25A0C8u: goto label_25a0c8;
            case 0x25A0CCu: goto label_25a0cc;
            case 0x25A0D0u: goto label_25a0d0;
            case 0x25A0D4u: goto label_25a0d4;
            case 0x25A0D8u: goto label_25a0d8;
            case 0x25A0DCu: goto label_25a0dc;
            case 0x25A0E0u: goto label_25a0e0;
            case 0x25A0E4u: goto label_25a0e4;
            case 0x25A0E8u: goto label_25a0e8;
            case 0x25A0ECu: goto label_25a0ec;
            case 0x25A0F0u: goto label_25a0f0;
            case 0x25A0F4u: goto label_25a0f4;
            case 0x25A0F8u: goto label_25a0f8;
            case 0x25A0FCu: goto label_25a0fc;
            case 0x25A100u: goto label_25a100;
            case 0x25A104u: goto label_25a104;
            case 0x25A108u: goto label_25a108;
            case 0x25A10Cu: goto label_25a10c;
            case 0x25A110u: goto label_25a110;
            case 0x25A114u: goto label_25a114;
            case 0x25A118u: goto label_25a118;
            case 0x25A11Cu: goto label_25a11c;
            case 0x25A120u: goto label_25a120;
            case 0x25A124u: goto label_25a124;
            case 0x25A128u: goto label_25a128;
            case 0x25A12Cu: goto label_25a12c;
            case 0x25A130u: goto label_25a130;
            case 0x25A134u: goto label_25a134;
            case 0x25A138u: goto label_25a138;
            case 0x25A13Cu: goto label_25a13c;
            case 0x25A140u: goto label_25a140;
            case 0x25A144u: goto label_25a144;
            case 0x25A148u: goto label_25a148;
            case 0x25A14Cu: goto label_25a14c;
            case 0x25A150u: goto label_25a150;
            case 0x25A154u: goto label_25a154;
            case 0x25A158u: goto label_25a158;
            case 0x25A15Cu: goto label_25a15c;
            case 0x25A160u: goto label_25a160;
            case 0x25A164u: goto label_25a164;
            case 0x25A168u: goto label_25a168;
            default: break;
        }
        return;
    }
label_fallthrough_0x25a164:
    ctx->pc = 0x25A16Cu;
}
