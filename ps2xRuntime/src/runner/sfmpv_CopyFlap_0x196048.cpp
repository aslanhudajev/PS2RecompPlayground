#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_CopyFlap
// Address: 0x196048 - 0x1961c4
void sfmpv_CopyFlap_0x196048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_CopyFlap");


    ctx->pc = 0x196048u;

    // 0x196048: 0x27bdff80
    ctx->pc = 0x196048u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19604c: 0xffb60060
    ctx->pc = 0x19604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x196050: 0xffb40040
    ctx->pc = 0x196050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x196054: 0xa0b02d
    ctx->pc = 0x196054u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196058: 0xffb30030
    ctx->pc = 0x196058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19605c: 0xe0a02d
    ctx->pc = 0x19605cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196060: 0xffbf0070
    ctx->pc = 0x196060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x196064: 0xffb50050
    ctx->pc = 0x196064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x196068: 0xffb20020
    ctx->pc = 0x196068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19606c: 0xffb10010
    ctx->pc = 0x19606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x196070: 0xffb00000
    ctx->pc = 0x196070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196074: 0x8e820000
    ctx->pc = 0x196074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x196078: 0x14400047
    ctx->pc = 0x196078u;
    {
        const bool branch_taken_0x196078 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19607Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196078) {
            ctx->pc = 0x196198u;
            goto label_196198;
        }
    }
    ctx->pc = 0x196080u;
    // 0x196080: 0x8c87000c
    ctx->pc = 0x196080u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x196084: 0x8e700000
    ctx->pc = 0x196084u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x196088: 0x8c950000
    ctx->pc = 0x196088u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19608c: 0x8c830004
    ctx->pc = 0x19608cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x196090: 0x207102a
    ctx->pc = 0x196090u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 7)));
    // 0x196094: 0x10400040
    ctx->pc = 0x196094u;
    {
        const bool branch_taken_0x196094 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x196098u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 8)));
        if (branch_taken_0x196094) {
            ctx->pc = 0x196198u;
            goto label_196198;
        }
    }
    ctx->pc = 0x19609Cu;
    // 0x19609c: 0xf03823
    ctx->pc = 0x19609cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1960a0: 0x2d03023
    ctx->pc = 0x1960a0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x1960a4: 0x2a31021
    ctx->pc = 0x1960a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1960a8: 0x24050003
    ctx->pc = 0x1960a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1960ac: 0xb08823
    ctx->pc = 0x1960acu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1960b0: 0x2a040004
    ctx->pc = 0x1960b0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 16), 4));
    // 0x1960b4: 0x509021
    ctx->pc = 0x1960b4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1960b8: 0xe6182a
    ctx->pc = 0x1960b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x1960bc: 0x204280b
    ctx->pc = 0x1960bcu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 16));
    // 0x1960c0: 0xe3300b
    ctx->pc = 0x1960c0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 7));
    // 0x1960c4: 0x2402ffff
    ctx->pc = 0x1960c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1960c8: 0x1108021
    ctx->pc = 0x1960c8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1960cc: 0x51102a
    ctx->pc = 0x1960ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x1960d0: 0xc53021
    ctx->pc = 0x1960d0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1960d4: 0x2452023
    ctx->pc = 0x1960d4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1960d8: 0x2880a
    ctx->pc = 0x1960d8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
    // 0x1960dc: 0x2052823
    ctx->pc = 0x1960dcu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1960e0: 0xc0616b0
    ctx->pc = 0x1960E0u;
    SET_GPR_U32(ctx, 31, 0x1960E8u);
    ctx->pc = 0x1960E4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 204));
    ctx->pc = 0x185AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CopyStm_0x185ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1960E8u; }
        else if (ctx->pc != 0x1960E8u) { ctx->pc = 0x1960E8u; }
    }
    if (ctx->pc != 0x1960E8u) { return; }
    ctx->pc = 0x1960E8u;
    // 0x1960e8: 0x40202d
    ctx->pc = 0x1960e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960ec: 0x8e620000
    ctx->pc = 0x1960ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1960f0: 0x908023
    ctx->pc = 0x1960f0u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1960f4: 0x2484fffc
    ctx->pc = 0x1960f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1960f8: 0x501021
    ctx->pc = 0x1960f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1960fc: 0xc061610
    ctx->pc = 0x1960FCu;
    SET_GPR_U32(ctx, 31, 0x196104u);
    ctx->pc = 0x196100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196104u; }
        else if (ctx->pc != 0x196104u) { ctx->pc = 0x196104u; }
    }
    if (ctx->pc != 0x196104u) { return; }
    ctx->pc = 0x196104u;
    // 0x196104: 0x40182d
    ctx->pc = 0x196104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196108: 0x24020008
    ctx->pc = 0x196108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19610c: 0x1062000e
    ctx->pc = 0x19610Cu;
    {
        const bool branch_taken_0x19610c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x196110u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 9));
        if (branch_taken_0x19610c) {
            ctx->pc = 0x196148u;
            goto label_196148;
        }
    }
    ctx->pc = 0x196114u;
    // 0x196114: 0x10400005
    ctx->pc = 0x196114u;
    {
        const bool branch_taken_0x196114 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x196118u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x196114) {
            ctx->pc = 0x19612Cu;
            goto label_19612c;
        }
    }
    ctx->pc = 0x19611Cu;
    // 0x19611c: 0x1062000b
    ctx->pc = 0x19611Cu;
    {
        const bool branch_taken_0x19611c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x196120u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        if (branch_taken_0x19611c) {
            ctx->pc = 0x19614Cu;
            goto label_19614c;
        }
    }
    ctx->pc = 0x196124u;
    // 0x196124: 0x10000018
    ctx->pc = 0x196124u;
    {
        const bool branch_taken_0x196124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196128u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        if (branch_taken_0x196124) {
            ctx->pc = 0x196188u;
            goto label_196188;
        }
    }
    ctx->pc = 0x19612Cu;
label_19612c:
    // 0x19612c: 0x24020040
    ctx->pc = 0x19612cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x196130: 0x10620012
    ctx->pc = 0x196130u;
    {
        const bool branch_taken_0x196130 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x196134u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x196130) {
            ctx->pc = 0x19617Cu;
            goto label_19617c;
        }
    }
    ctx->pc = 0x196138u;
    // 0x196138: 0x54620013
    ctx->pc = 0x196138u;
    {
        const bool branch_taken_0x196138 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x196138) {
            ctx->pc = 0x19613Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x196188u;
            goto label_196188;
        }
    }
    ctx->pc = 0x196140u;
    // 0x196140: 0x1000000f
    ctx->pc = 0x196140u;
    {
        const bool branch_taken_0x196140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196144u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        if (branch_taken_0x196140) {
            ctx->pc = 0x196180u;
            goto label_196180;
        }
    }
    ctx->pc = 0x196148u;
label_196148:
    // 0x196148: 0x2552823
    ctx->pc = 0x196148u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_19614c:
    // 0x19614c: 0x2512021
    ctx->pc = 0x19614cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x196150: 0xb12821
    ctx->pc = 0x196150u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x196154: 0xc06163a
    ctx->pc = 0x196154u;
    SET_GPR_U32(ctx, 31, 0x19615Cu);
    ctx->pc = 0x196158u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 204));
    ctx->pc = 0x1858E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_BsearchDelim_0x1858e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19615Cu; }
        else if (ctx->pc != 0x19615Cu) { ctx->pc = 0x19615Cu; }
    }
    if (ctx->pc != 0x19615Cu) { return; }
    ctx->pc = 0x19615Cu;
    // 0x19615c: 0x40202d
    ctx->pc = 0x19615cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196160: 0x1080000e
    ctx->pc = 0x196160u;
    {
        const bool branch_taken_0x196160 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x196164u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196160) {
            ctx->pc = 0x19619Cu;
            goto label_19619c;
        }
    }
    ctx->pc = 0x196168u;
    // 0x196168: 0xc061610
    ctx->pc = 0x196168u;
    SET_GPR_U32(ctx, 31, 0x196170u);
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196170u; }
        else if (ctx->pc != 0x196170u) { ctx->pc = 0x196170u; }
    }
    if (ctx->pc != 0x196170u) { return; }
    ctx->pc = 0x196170u;
    // 0x196170: 0x24030004
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x196174: 0x14430009
    ctx->pc = 0x196174u;
    {
        const bool branch_taken_0x196174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x196178u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196174) {
            ctx->pc = 0x19619Cu;
            goto label_19619c;
        }
    }
    ctx->pc = 0x19617Cu;
label_19617c:
    // 0x19617c: 0x2501021
    ctx->pc = 0x19617cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_196180:
    // 0x196180: 0x10000005
    ctx->pc = 0x196180u;
    {
        const bool branch_taken_0x196180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196184u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x196180) {
            ctx->pc = 0x196198u;
            goto label_196198;
        }
    }
    ctx->pc = 0x196188u;
label_196188:
    // 0x196188: 0x3c02ff00
    ctx->pc = 0x196188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x19618c: 0x76182a
    ctx->pc = 0x19618cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 22)));
    // 0x196190: 0x10600002
    ctx->pc = 0x196190u;
    {
        const bool branch_taken_0x196190 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x196194u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 3842));
        if (branch_taken_0x196190) {
            ctx->pc = 0x19619Cu;
            goto label_19619c;
        }
    }
    ctx->pc = 0x196198u;
label_196198:
    // 0x196198: 0x102d
    ctx->pc = 0x196198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19619c:
    // 0x19619c: 0xdfbf0070
    ctx->pc = 0x19619cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1961a0: 0xdfb60060
    ctx->pc = 0x1961a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1961a4: 0xdfb50050
    ctx->pc = 0x1961a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1961a8: 0xdfb40040
    ctx->pc = 0x1961a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1961ac: 0xdfb30030
    ctx->pc = 0x1961acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1961b0: 0xdfb20020
    ctx->pc = 0x1961b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1961b4: 0xdfb10010
    ctx->pc = 0x1961b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1961b8: 0xdfb00000
    ctx->pc = 0x1961b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1961bc: 0x3e00008
    ctx->pc = 0x1961BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1961C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19612Cu: goto label_19612c;
            case 0x196148u: goto label_196148;
            case 0x19614Cu: goto label_19614c;
            case 0x19617Cu: goto label_19617c;
            case 0x196180u: goto label_196180;
            case 0x196188u: goto label_196188;
            case 0x196198u: goto label_196198;
            case 0x19619Cu: goto label_19619c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1961C4u;
}
