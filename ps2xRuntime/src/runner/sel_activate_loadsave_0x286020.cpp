#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sel_activate_loadsave
// Address: 0x286020 - 0x286188
void sel_activate_loadsave_0x286020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x286020u;

label_286020:
    // 0x286020: 0x27bdffb0
    ctx->pc = 0x286020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_286024:
    // 0x286024: 0xffbf0040
    ctx->pc = 0x286024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_286028:
    // 0x286028: 0xffb30030
    ctx->pc = 0x286028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_28602c:
    // 0x28602c: 0xffb20020
    ctx->pc = 0x28602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_286030:
    // 0x286030: 0xffb10010
    ctx->pc = 0x286030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_286034:
    // 0x286034: 0xffb00000
    ctx->pc = 0x286034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_286038:
    // 0x286038: 0x80982d
    ctx->pc = 0x286038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28603c:
    // 0x28603c: 0x2412ffff
    ctx->pc = 0x28603cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
label_286040:
    // 0x286040: 0x882d
    ctx->pc = 0x286040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286044:
    // 0x286044: 0x0
    ctx->pc = 0x286044u;
    // NOP
label_286048:
    // 0x286048: 0x3c030035
    ctx->pc = 0x286048u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_28604c:
    // 0x28604c: 0x2463a620
    ctx->pc = 0x28604cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944288));
label_286050:
    // 0x286050: 0x240200e8
    ctx->pc = 0x286050u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
label_286054:
    // 0x286054: 0x2621018
    ctx->pc = 0x286054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_286058:
    // 0x286058: 0x621821
    ctx->pc = 0x286058u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28605c:
    // 0x28605c: 0x24020024
    ctx->pc = 0x28605cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
label_286060:
    // 0x286060: 0x2221018
    ctx->pc = 0x286060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_286064:
    // 0x286064: 0x8c63001c
    ctx->pc = 0x286064u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_286068:
    // 0x286068: 0x438021
    ctx->pc = 0x286068u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28606c:
    // 0x28606c: 0x8e020000
    ctx->pc = 0x28606cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_286070:
    // 0x286070: 0x1040003e
label_286074:
    if (ctx->pc == 0x286074u) {
        ctx->pc = 0x286074u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286078u;
        goto label_286078;
    }
    ctx->pc = 0x286070u;
    {
        const bool branch_taken_0x286070 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x286074u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x286070) {
            ctx->pc = 0x28616Cu;
            goto label_28616c;
        }
    }
    ctx->pc = 0x286078u;
label_286078:
    // 0x286078: 0x8e020004
    ctx->pc = 0x286078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28607c:
    // 0x28607c: 0x2443fc18
    ctx->pc = 0x28607cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294966296));
label_286080:
    // 0x286080: 0x2c620006
    ctx->pc = 0x286080u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 6));
label_286084:
    // 0x286084: 0x10400032
label_286088:
    if (ctx->pc == 0x286088u) {
        ctx->pc = 0x286088u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x28608Cu;
        goto label_28608c;
    }
    ctx->pc = 0x286084u;
    {
        const bool branch_taken_0x286084 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x286088u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x286084) {
            ctx->pc = 0x286150u;
            goto label_286150;
        }
    }
    ctx->pc = 0x28608Cu;
label_28608c:
    // 0x28608c: 0x2442d320
    ctx->pc = 0x28608cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955808));
label_286090:
    // 0x286090: 0x31880
    ctx->pc = 0x286090u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_286094:
    // 0x286094: 0x621821
    ctx->pc = 0x286094u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_286098:
    // 0x286098: 0x8c620000
    ctx->pc = 0x286098u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28609c:
    // 0x28609c: 0x400008
label_2860a0:
    if (ctx->pc == 0x2860A0u) {
        ctx->pc = 0x2860A4u;
        goto label_2860a4;
    }
    ctx->pc = 0x28609Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286020u: goto label_286020;
            case 0x286024u: goto label_286024;
            case 0x286028u: goto label_286028;
            case 0x28602Cu: goto label_28602c;
            case 0x286030u: goto label_286030;
            case 0x286034u: goto label_286034;
            case 0x286038u: goto label_286038;
            case 0x28603Cu: goto label_28603c;
            case 0x286040u: goto label_286040;
            case 0x286044u: goto label_286044;
            case 0x286048u: goto label_286048;
            case 0x28604Cu: goto label_28604c;
            case 0x286050u: goto label_286050;
            case 0x286054u: goto label_286054;
            case 0x286058u: goto label_286058;
            case 0x28605Cu: goto label_28605c;
            case 0x286060u: goto label_286060;
            case 0x286064u: goto label_286064;
            case 0x286068u: goto label_286068;
            case 0x28606Cu: goto label_28606c;
            case 0x286070u: goto label_286070;
            case 0x286074u: goto label_286074;
            case 0x286078u: goto label_286078;
            case 0x28607Cu: goto label_28607c;
            case 0x286080u: goto label_286080;
            case 0x286084u: goto label_286084;
            case 0x286088u: goto label_286088;
            case 0x28608Cu: goto label_28608c;
            case 0x286090u: goto label_286090;
            case 0x286094u: goto label_286094;
            case 0x286098u: goto label_286098;
            case 0x28609Cu: goto label_28609c;
            case 0x2860A0u: goto label_2860a0;
            case 0x2860A4u: goto label_2860a4;
            case 0x2860A8u: goto label_2860a8;
            case 0x2860ACu: goto label_2860ac;
            case 0x2860B0u: goto label_2860b0;
            case 0x2860B4u: goto label_2860b4;
            case 0x2860B8u: goto label_2860b8;
            case 0x2860BCu: goto label_2860bc;
            case 0x2860C0u: goto label_2860c0;
            case 0x2860C4u: goto label_2860c4;
            case 0x2860C8u: goto label_2860c8;
            case 0x2860CCu: goto label_2860cc;
            case 0x2860D0u: goto label_2860d0;
            case 0x2860D4u: goto label_2860d4;
            case 0x2860D8u: goto label_2860d8;
            case 0x2860DCu: goto label_2860dc;
            case 0x2860E0u: goto label_2860e0;
            case 0x2860E4u: goto label_2860e4;
            case 0x2860E8u: goto label_2860e8;
            case 0x2860ECu: goto label_2860ec;
            case 0x2860F0u: goto label_2860f0;
            case 0x2860F4u: goto label_2860f4;
            case 0x2860F8u: goto label_2860f8;
            case 0x2860FCu: goto label_2860fc;
            case 0x286100u: goto label_286100;
            case 0x286104u: goto label_286104;
            case 0x286108u: goto label_286108;
            case 0x28610Cu: goto label_28610c;
            case 0x286110u: goto label_286110;
            case 0x286114u: goto label_286114;
            case 0x286118u: goto label_286118;
            case 0x28611Cu: goto label_28611c;
            case 0x286120u: goto label_286120;
            case 0x286124u: goto label_286124;
            case 0x286128u: goto label_286128;
            case 0x28612Cu: goto label_28612c;
            case 0x286130u: goto label_286130;
            case 0x286134u: goto label_286134;
            case 0x286138u: goto label_286138;
            case 0x28613Cu: goto label_28613c;
            case 0x286140u: goto label_286140;
            case 0x286144u: goto label_286144;
            case 0x286148u: goto label_286148;
            case 0x28614Cu: goto label_28614c;
            case 0x286150u: goto label_286150;
            case 0x286154u: goto label_286154;
            case 0x286158u: goto label_286158;
            case 0x28615Cu: goto label_28615c;
            case 0x286160u: goto label_286160;
            case 0x286164u: goto label_286164;
            case 0x286168u: goto label_286168;
            case 0x28616Cu: goto label_28616c;
            case 0x286170u: goto label_286170;
            case 0x286174u: goto label_286174;
            case 0x286178u: goto label_286178;
            case 0x28617Cu: goto label_28617c;
            case 0x286180u: goto label_286180;
            case 0x286184u: goto label_286184;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2860A4u;
label_2860a4:
    // 0x2860a4: 0x3c020031
    ctx->pc = 0x2860a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2860a8:
    // 0x2860a8: 0x8c42f184
    ctx->pc = 0x2860a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_2860ac:
    // 0x2860ac: 0x14400025
label_2860b0:
    if (ctx->pc == 0x2860B0u) {
        ctx->pc = 0x2860B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2860B4u;
        goto label_2860b4;
    }
    ctx->pc = 0x2860ACu;
    {
        const bool branch_taken_0x2860ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2860B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2860ac) {
            ctx->pc = 0x286144u;
            goto label_286144;
        }
    }
    ctx->pc = 0x2860B4u;
label_2860b4:
    // 0x2860b4: 0x3c020034
    ctx->pc = 0x2860b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2860b8:
    // 0x2860b8: 0x8c43e808
    ctx->pc = 0x2860b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
label_2860bc:
    // 0x2860bc: 0x24020008
    ctx->pc = 0x2860bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_2860c0:
    // 0x2860c0: 0x14620005
label_2860c4:
    if (ctx->pc == 0x2860C4u) {
        ctx->pc = 0x2860C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x2860C8u;
        goto label_2860c8;
    }
    ctx->pc = 0x2860C0u;
    {
        const bool branch_taken_0x2860c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2860C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2860c0) {
            ctx->pc = 0x2860D8u;
            goto label_2860d8;
        }
    }
    ctx->pc = 0x2860C8u;
label_2860c8:
    // 0x2860c8: 0x8c43e80c
    ctx->pc = 0x2860c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961164)));
label_2860cc:
    // 0x2860cc: 0x24020003
    ctx->pc = 0x2860ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2860d0:
    // 0x2860d0: 0x1062001c
label_2860d4:
    if (ctx->pc == 0x2860D4u) {
        ctx->pc = 0x2860D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2860D8u;
        goto label_2860d8;
    }
    ctx->pc = 0x2860D0u;
    {
        const bool branch_taken_0x2860d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2860D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2860d0) {
            ctx->pc = 0x286144u;
            goto label_286144;
        }
    }
    ctx->pc = 0x2860D8u;
label_2860d8:
    // 0x2860d8: 0xc082728
label_2860dc:
    if (ctx->pc == 0x2860DCu) {
        ctx->pc = 0x2860E0u;
        goto label_2860e0;
    }
    ctx->pc = 0x2860D8u;
    SET_GPR_U32(ctx, 31, 0x2860E0u);
    ctx->pc = 0x209CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_exists_0x209ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2860E0u; }
    }
    if (ctx->pc != 0x2860E0u) { return; }
    ctx->pc = 0x2860E0u;
label_2860e0:
    // 0x2860e0: 0x5c40001b
label_2860e4:
    if (ctx->pc == 0x2860E4u) {
        ctx->pc = 0x2860E4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x2860E8u;
        goto label_2860e8;
    }
    ctx->pc = 0x2860E0u;
    {
        const bool branch_taken_0x2860e0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2860e0) {
            ctx->pc = 0x2860E4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
            ctx->pc = 0x286150u;
            goto label_286150;
        }
    }
    ctx->pc = 0x2860E8u;
label_2860e8:
    // 0x2860e8: 0x10000016
label_2860ec:
    if (ctx->pc == 0x2860ECu) {
        ctx->pc = 0x2860ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2860F0u;
        goto label_2860f0;
    }
    ctx->pc = 0x2860E8u;
    {
        const bool branch_taken_0x2860e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2860ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2860e8) {
            ctx->pc = 0x286144u;
            goto label_286144;
        }
    }
    ctx->pc = 0x2860F0u;
label_2860f0:
    // 0x2860f0: 0x3c020031
    ctx->pc = 0x2860f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2860f4:
    // 0x2860f4: 0x8c42f184
    ctx->pc = 0x2860f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_2860f8:
    // 0x2860f8: 0x14400012
label_2860fc:
    if (ctx->pc == 0x2860FCu) {
        ctx->pc = 0x2860FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x286100u;
        goto label_286100;
    }
    ctx->pc = 0x2860F8u;
    {
        const bool branch_taken_0x2860f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2860FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2860f8) {
            ctx->pc = 0x286144u;
            goto label_286144;
        }
    }
    ctx->pc = 0x286100u;
label_286100:
    // 0x286100: 0xc082728
label_286104:
    if (ctx->pc == 0x286104u) {
        ctx->pc = 0x286108u;
        goto label_286108;
    }
    ctx->pc = 0x286100u;
    SET_GPR_U32(ctx, 31, 0x286108u);
    ctx->pc = 0x209CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vmu_exists_0x209ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286108u; }
    }
    if (ctx->pc != 0x286108u) { return; }
    ctx->pc = 0x286108u;
label_286108:
    // 0x286108: 0x5c400011
label_28610c:
    if (ctx->pc == 0x28610Cu) {
        ctx->pc = 0x28610Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x286110u;
        goto label_286110;
    }
    ctx->pc = 0x286108u;
    {
        const bool branch_taken_0x286108 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x286108) {
            ctx->pc = 0x28610Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
            ctx->pc = 0x286150u;
            goto label_286150;
        }
    }
    ctx->pc = 0x286110u;
label_286110:
    // 0x286110: 0x1000000c
label_286114:
    if (ctx->pc == 0x286114u) {
        ctx->pc = 0x286114u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x286118u;
        goto label_286118;
    }
    ctx->pc = 0x286110u;
    {
        const bool branch_taken_0x286110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x286114u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x286110) {
            ctx->pc = 0x286144u;
            goto label_286144;
        }
    }
    ctx->pc = 0x286118u;
label_286118:
    // 0x286118: 0x3c020034
    ctx->pc = 0x286118u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_28611c:
    // 0x28611c: 0x8c43e808
    ctx->pc = 0x28611cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
label_286120:
    // 0x286120: 0x24020008
    ctx->pc = 0x286120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_286124:
    // 0x286124: 0x5462000a
label_286128:
    if (ctx->pc == 0x286128u) {
        ctx->pc = 0x286128u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x28612Cu;
        goto label_28612c;
    }
    ctx->pc = 0x286124u;
    {
        const bool branch_taken_0x286124 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x286124) {
            ctx->pc = 0x286128u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
            ctx->pc = 0x286150u;
            goto label_286150;
        }
    }
    ctx->pc = 0x28612Cu;
label_28612c:
    // 0x28612c: 0x3c020034
    ctx->pc = 0x28612cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_286130:
    // 0x286130: 0x8c43e80c
    ctx->pc = 0x286130u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961164)));
label_286134:
    // 0x286134: 0x24020003
    ctx->pc = 0x286134u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_286138:
    // 0x286138: 0x54620005
label_28613c:
    if (ctx->pc == 0x28613Cu) {
        ctx->pc = 0x28613Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x286140u;
        goto label_286140;
    }
    ctx->pc = 0x286138u;
    {
        const bool branch_taken_0x286138 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x286138) {
            ctx->pc = 0x28613Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
            ctx->pc = 0x286150u;
            goto label_286150;
        }
    }
    ctx->pc = 0x286140u;
label_286140:
    // 0x286140: 0x2402ffff
    ctx->pc = 0x286140u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_286144:
    // 0x286144: 0x10000002
label_286148:
    if (ctx->pc == 0x286148u) {
        ctx->pc = 0x286148u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x28614Cu;
        goto label_28614c;
    }
    ctx->pc = 0x286144u;
    {
        const bool branch_taken_0x286144 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x286148u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x286144) {
            ctx->pc = 0x286150u;
            goto label_286150;
        }
    }
    ctx->pc = 0x28614Cu;
label_28614c:
    // 0x28614c: 0xae000020
    ctx->pc = 0x28614cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_286150:
    // 0x286150: 0x8e020020
    ctx->pc = 0x286150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_286154:
    // 0x286154: 0x4400003
label_286158:
    if (ctx->pc == 0x286158u) {
        ctx->pc = 0x286158u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28615Cu;
        goto label_28615c;
    }
    ctx->pc = 0x286154u;
    {
        const bool branch_taken_0x286154 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x286158u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x286154) {
            ctx->pc = 0x286164u;
            goto label_286164;
        }
    }
    ctx->pc = 0x28615Cu;
label_28615c:
    // 0x28615c: 0x52102a
    ctx->pc = 0x28615cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
label_286160:
    // 0x286160: 0x222900a
    ctx->pc = 0x286160u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 17));
label_286164:
    // 0x286164: 0x1000ffb8
label_286168:
    if (ctx->pc == 0x286168u) {
        ctx->pc = 0x286168u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x28616Cu;
        goto label_28616c;
    }
    ctx->pc = 0x286164u;
    {
        const bool branch_taken_0x286164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x286168u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x286164) {
            ctx->pc = 0x286048u;
            goto label_286048;
        }
    }
    ctx->pc = 0x28616Cu;
label_28616c:
    // 0x28616c: 0xdfbf0040
    ctx->pc = 0x28616cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_286170:
    // 0x286170: 0xdfb30030
    ctx->pc = 0x286170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_286174:
    // 0x286174: 0xdfb20020
    ctx->pc = 0x286174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_286178:
    // 0x286178: 0xdfb10010
    ctx->pc = 0x286178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28617c:
    // 0x28617c: 0xdfb00000
    ctx->pc = 0x28617cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286180:
    // 0x286180: 0x3e00008
label_286184:
    if (ctx->pc == 0x286184u) {
        ctx->pc = 0x286184u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x286188u;
        goto label_fallthrough_0x286180;
    }
    ctx->pc = 0x286180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286184u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286020u: goto label_286020;
            case 0x286024u: goto label_286024;
            case 0x286028u: goto label_286028;
            case 0x28602Cu: goto label_28602c;
            case 0x286030u: goto label_286030;
            case 0x286034u: goto label_286034;
            case 0x286038u: goto label_286038;
            case 0x28603Cu: goto label_28603c;
            case 0x286040u: goto label_286040;
            case 0x286044u: goto label_286044;
            case 0x286048u: goto label_286048;
            case 0x28604Cu: goto label_28604c;
            case 0x286050u: goto label_286050;
            case 0x286054u: goto label_286054;
            case 0x286058u: goto label_286058;
            case 0x28605Cu: goto label_28605c;
            case 0x286060u: goto label_286060;
            case 0x286064u: goto label_286064;
            case 0x286068u: goto label_286068;
            case 0x28606Cu: goto label_28606c;
            case 0x286070u: goto label_286070;
            case 0x286074u: goto label_286074;
            case 0x286078u: goto label_286078;
            case 0x28607Cu: goto label_28607c;
            case 0x286080u: goto label_286080;
            case 0x286084u: goto label_286084;
            case 0x286088u: goto label_286088;
            case 0x28608Cu: goto label_28608c;
            case 0x286090u: goto label_286090;
            case 0x286094u: goto label_286094;
            case 0x286098u: goto label_286098;
            case 0x28609Cu: goto label_28609c;
            case 0x2860A0u: goto label_2860a0;
            case 0x2860A4u: goto label_2860a4;
            case 0x2860A8u: goto label_2860a8;
            case 0x2860ACu: goto label_2860ac;
            case 0x2860B0u: goto label_2860b0;
            case 0x2860B4u: goto label_2860b4;
            case 0x2860B8u: goto label_2860b8;
            case 0x2860BCu: goto label_2860bc;
            case 0x2860C0u: goto label_2860c0;
            case 0x2860C4u: goto label_2860c4;
            case 0x2860C8u: goto label_2860c8;
            case 0x2860CCu: goto label_2860cc;
            case 0x2860D0u: goto label_2860d0;
            case 0x2860D4u: goto label_2860d4;
            case 0x2860D8u: goto label_2860d8;
            case 0x2860DCu: goto label_2860dc;
            case 0x2860E0u: goto label_2860e0;
            case 0x2860E4u: goto label_2860e4;
            case 0x2860E8u: goto label_2860e8;
            case 0x2860ECu: goto label_2860ec;
            case 0x2860F0u: goto label_2860f0;
            case 0x2860F4u: goto label_2860f4;
            case 0x2860F8u: goto label_2860f8;
            case 0x2860FCu: goto label_2860fc;
            case 0x286100u: goto label_286100;
            case 0x286104u: goto label_286104;
            case 0x286108u: goto label_286108;
            case 0x28610Cu: goto label_28610c;
            case 0x286110u: goto label_286110;
            case 0x286114u: goto label_286114;
            case 0x286118u: goto label_286118;
            case 0x28611Cu: goto label_28611c;
            case 0x286120u: goto label_286120;
            case 0x286124u: goto label_286124;
            case 0x286128u: goto label_286128;
            case 0x28612Cu: goto label_28612c;
            case 0x286130u: goto label_286130;
            case 0x286134u: goto label_286134;
            case 0x286138u: goto label_286138;
            case 0x28613Cu: goto label_28613c;
            case 0x286140u: goto label_286140;
            case 0x286144u: goto label_286144;
            case 0x286148u: goto label_286148;
            case 0x28614Cu: goto label_28614c;
            case 0x286150u: goto label_286150;
            case 0x286154u: goto label_286154;
            case 0x286158u: goto label_286158;
            case 0x28615Cu: goto label_28615c;
            case 0x286160u: goto label_286160;
            case 0x286164u: goto label_286164;
            case 0x286168u: goto label_286168;
            case 0x28616Cu: goto label_28616c;
            case 0x286170u: goto label_286170;
            case 0x286174u: goto label_286174;
            case 0x286178u: goto label_286178;
            case 0x28617Cu: goto label_28617c;
            case 0x286180u: goto label_286180;
            case 0x286184u: goto label_286184;
            default: break;
        }
        return;
    }
label_fallthrough_0x286180:
    ctx->pc = 0x286188u;
}
