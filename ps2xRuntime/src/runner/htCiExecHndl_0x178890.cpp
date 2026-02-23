#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiExecHndl
// Address: 0x178890 - 0x1789a0
void htCiExecHndl_0x178890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiExecHndl");


    ctx->pc = 0x178890u;

    // 0x178890: 0x27bdffd0
    ctx->pc = 0x178890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178894: 0x24020002
    ctx->pc = 0x178894u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x178898: 0xffb00000
    ctx->pc = 0x178898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17889c: 0xffbf0020
    ctx->pc = 0x17889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1788a0: 0x80802d
    ctx->pc = 0x1788a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788a4: 0xffb10010
    ctx->pc = 0x1788a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1788a8: 0x82110002
    ctx->pc = 0x1788a8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1788ac: 0x16220038
    ctx->pc = 0x1788ACu;
    {
        const bool branch_taken_0x1788ac = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1788B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1788ac) {
            ctx->pc = 0x178990u;
            goto label_178990;
        }
    }
    ctx->pc = 0x1788B4u;
    // 0x1788b4: 0xc05e1fe
    ctx->pc = 0x1788B4u;
    SET_GPR_U32(ctx, 31, 0x1788BCu);
    ctx->pc = 0x1787F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_is_all_excute_0x1787f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1788BCu; }
        else if (ctx->pc != 0x1788BCu) { ctx->pc = 0x1788BCu; }
    }
    if (ctx->pc != 0x1788BCu) { return; }
    ctx->pc = 0x1788BCu;
    // 0x1788bc: 0x10400034
    ctx->pc = 0x1788BCu;
    {
        const bool branch_taken_0x1788bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1788C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1788bc) {
            ctx->pc = 0x178990u;
            goto label_178990;
        }
    }
    ctx->pc = 0x1788C4u;
    // 0x1788c4: 0x8e020008
    ctx->pc = 0x1788c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1788c8: 0x54400032
    ctx->pc = 0x1788C8u;
    {
        const bool branch_taken_0x1788c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1788c8) {
            ctx->pc = 0x1788CCu;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x178994u;
            goto label_178994;
        }
    }
    ctx->pc = 0x1788D0u;
    // 0x1788d0: 0x82020003
    ctx->pc = 0x1788d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1788d4: 0x14400004
    ctx->pc = 0x1788D4u;
    {
        const bool branch_taken_0x1788d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1788D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1788d4) {
            ctx->pc = 0x1788E8u;
            goto label_1788e8;
        }
    }
    ctx->pc = 0x1788DCu;
    // 0x1788dc: 0x24020001
    ctx->pc = 0x1788dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1788e0: 0x1000000d
    ctx->pc = 0x1788E0u;
    {
        const bool branch_taken_0x1788e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1788E4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1788e0) {
            ctx->pc = 0x178918u;
            goto label_178918;
        }
    }
    ctx->pc = 0x1788E8u;
label_1788e8:
    // 0x1788e8: 0x14440003
    ctx->pc = 0x1788E8u;
    {
        const bool branch_taken_0x1788e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x1788e8) {
            ctx->pc = 0x1788F8u;
            goto label_1788f8;
        }
    }
    ctx->pc = 0x1788F0u;
    // 0x1788f0: 0x10000009
    ctx->pc = 0x1788F0u;
    {
        const bool branch_taken_0x1788f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1788F4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
        if (branch_taken_0x1788f0) {
            ctx->pc = 0x178918u;
            goto label_178918;
        }
    }
    ctx->pc = 0x1788F8u;
label_1788f8:
    // 0x1788f8: 0x14510007
    ctx->pc = 0x1788F8u;
    {
        const bool branch_taken_0x1788f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x1788f8) {
            ctx->pc = 0x178918u;
            goto label_178918;
        }
    }
    ctx->pc = 0x178900u;
    // 0x178900: 0x8e020018
    ctx->pc = 0x178900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x178904: 0x8e030020
    ctx->pc = 0x178904u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x178908: 0xa2040002
    ctx->pc = 0x178908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x17890c: 0x431021
    ctx->pc = 0x17890cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178910: 0xa2000003
    ctx->pc = 0x178910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x178914: 0xae020018
    ctx->pc = 0x178914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_178918:
    // 0x178918: 0xc05d95e
    ctx->pc = 0x178918u;
    SET_GPR_U32(ctx, 31, 0x178920u);
    ctx->pc = 0x176578u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Lock_0x176578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178920u; }
        else if (ctx->pc != 0x178920u) { ctx->pc = 0x178920u; }
    }
    if (ctx->pc != 0x178920u) { return; }
    ctx->pc = 0x178920u;
    // 0x178920: 0x82030003
    ctx->pc = 0x178920u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x178924: 0x24020001
    ctx->pc = 0x178924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x178928: 0x14620008
    ctx->pc = 0x178928u;
    {
        const bool branch_taken_0x178928 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x17892Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x178928) {
            ctx->pc = 0x17894Cu;
            goto label_17894c;
        }
    }
    ctx->pc = 0x178930u;
    // 0x178930: 0x8e050018
    ctx->pc = 0x178930u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x178934: 0x302d
    ctx->pc = 0x178934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178938: 0x8e04000c
    ctx->pc = 0x178938u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17893c: 0xc056340
    ctx->pc = 0x17893Cu;
    SET_GPR_U32(ctx, 31, 0x178944u);
    ctx->pc = 0x178940u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 11));
    ctx->pc = 0x158D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x158d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178944u; }
        else if (ctx->pc != 0x178944u) { ctx->pc = 0x178944u; }
    }
    if (ctx->pc != 0x178944u) { return; }
    ctx->pc = 0x178944u;
    // 0x178944: 0x1000000e
    ctx->pc = 0x178944u;
    {
        const bool branch_taken_0x178944 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178948u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x178944) {
            ctx->pc = 0x178980u;
            goto label_178980;
        }
    }
    ctx->pc = 0x17894Cu;
label_17894c:
    // 0x17894c: 0x1462000c
    ctx->pc = 0x17894Cu;
    {
        const bool branch_taken_0x17894c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x178950u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17894c) {
            ctx->pc = 0x178980u;
            goto label_178980;
        }
    }
    ctx->pc = 0x178954u;
    // 0x178954: 0x8e060020
    ctx->pc = 0x178954u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x178958: 0x8e05001c
    ctx->pc = 0x178958u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17895c: 0x8e04000c
    ctx->pc = 0x17895cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x178960: 0xc05d7ca
    ctx->pc = 0x178960u;
    SET_GPR_U32(ctx, 31, 0x178968u);
    ctx->pc = 0x178964u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 11));
    ctx->pc = 0x175F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_ReqRdHst_0x175f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178968u; }
        else if (ctx->pc != 0x178968u) { ctx->pc = 0x178968u; }
    }
    if (ctx->pc != 0x178968u) { return; }
    ctx->pc = 0x178968u;
    // 0x178968: 0x14400005
    ctx->pc = 0x178968u;
    {
        const bool branch_taken_0x178968 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17896Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x178968) {
            ctx->pc = 0x178980u;
            goto label_178980;
        }
    }
    ctx->pc = 0x178970u;
    // 0x178970: 0x3c04002c
    ctx->pc = 0x178970u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x178974: 0xc05114a
    ctx->pc = 0x178974u;
    SET_GPR_U32(ctx, 31, 0x17897Cu);
    ctx->pc = 0x178978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948272));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17897Cu; }
        else if (ctx->pc != 0x17897Cu) { ctx->pc = 0x17897Cu; }
    }
    if (ctx->pc != 0x17897Cu) { return; }
    ctx->pc = 0x17897Cu;
    // 0x17897c: 0xdfbf0020
    ctx->pc = 0x17897cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_178980:
    // 0x178980: 0xdfb10010
    ctx->pc = 0x178980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178984: 0xdfb00000
    ctx->pc = 0x178984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178988: 0x805d966
    ctx->pc = 0x178988u;
    ctx->pc = 0x17898Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x176598u;
    SRD_Unlock_0x176598(rdram, ctx, runtime); return;
    ctx->pc = 0x178990u;
label_178990:
    // 0x178990: 0xdfb10010
    ctx->pc = 0x178990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_178994:
    // 0x178994: 0xdfb00000
    ctx->pc = 0x178994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178998: 0x3e00008
    ctx->pc = 0x178998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17899Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1788E8u: goto label_1788e8;
            case 0x1788F8u: goto label_1788f8;
            case 0x178918u: goto label_178918;
            case 0x17894Cu: goto label_17894c;
            case 0x178980u: goto label_178980;
            case 0x178990u: goto label_178990;
            case 0x178994u: goto label_178994;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1789A0u;
}
