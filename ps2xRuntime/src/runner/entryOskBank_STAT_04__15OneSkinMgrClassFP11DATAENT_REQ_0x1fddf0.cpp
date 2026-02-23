#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskBank_STAT_04__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fddf0 - 0x1fdfa0
void entryOskBank_STAT_04__15OneSkinMgrClassFP11DATAENT_REQ_0x1fddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskBank_STAT_04__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fddf0u;

    // 0x1fddf0: 0x27bdffe0
    ctx->pc = 0x1fddf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fddf4: 0x7fbf0010
    ctx->pc = 0x1fddf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fddf8: 0x7fb00000
    ctx->pc = 0x1fddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fddfc: 0x3c010046
    ctx->pc = 0x1fddfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)70 << 16));
    // 0x1fde00: 0x84227cf0
    ctx->pc = 0x1fde00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 31984)));
    // 0x1fde04: 0x1040000c
    ctx->pc = 0x1FDE04u;
    {
        const bool branch_taken_0x1fde04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FDE08u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fde04) {
            ctx->pc = 0x1FDE38u;
            goto label_1fde38;
        }
    }
    ctx->pc = 0x1FDE0Cu;
    // 0x1fde0c: 0x70008628
    ctx->pc = 0x1fde0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fde10:
    // 0x1fde10: 0xc079580
    ctx->pc = 0x1FDE10u;
    SET_GPR_U32(ctx, 31, 0x1FDE18u);
    ctx->pc = 0x1E5600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5600_0x1e5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE18u; }
        else if (ctx->pc != 0x1FDE18u) { ctx->pc = 0x1FDE18u; }
    }
    if (ctx->pc != 0x1FDE18u) { return; }
    ctx->pc = 0x1FDE18u;
    // 0x1fde18: 0x26100001
    ctx->pc = 0x1fde18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fde1c: 0x2a020800
    ctx->pc = 0x1fde1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2048));
    // 0x1fde20: 0x0
    ctx->pc = 0x1fde20u;
    // NOP
    // 0x1fde24: 0x0
    ctx->pc = 0x1fde24u;
    // NOP
    // 0x1fde28: 0x1440fff9
    ctx->pc = 0x1FDE28u;
    {
        const bool branch_taken_0x1fde28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fde28) {
            ctx->pc = 0x1FDE10u;
            goto label_1fde10;
        }
    }
    ctx->pc = 0x1FDE30u;
    // 0x1fde30: 0x10000057
    ctx->pc = 0x1FDE30u;
    {
        const bool branch_taken_0x1fde30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FDE34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fde30) {
            ctx->pc = 0x1FDF90u;
            goto label_1fdf90;
        }
    }
    ctx->pc = 0x1FDE38u;
label_1fde38:
    // 0x1fde38: 0x3c010052
    ctx->pc = 0x1fde38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fde3c: 0x8c2494b0
    ctx->pc = 0x1fde3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fde40: 0x3c020052
    ctx->pc = 0x1fde40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fde44: 0x244394d0
    ctx->pc = 0x1fde44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fde48: 0x2402fffe
    ctx->pc = 0x1fde48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1fde4c: 0x642021
    ctx->pc = 0x1fde4cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fde50: 0x80830000
    ctx->pc = 0x1fde50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fde54: 0x14620011
    ctx->pc = 0x1FDE54u;
    {
        const bool branch_taken_0x1fde54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1FDE58u;
        SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
        if (branch_taken_0x1fde54) {
            ctx->pc = 0x1FDE9Cu;
            goto label_1fde9c;
        }
    }
    ctx->pc = 0x1FDE5Cu;
    // 0x1fde5c: 0xa0800000
    ctx->pc = 0x1fde5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fde60: 0x3c010052
    ctx->pc = 0x1fde60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fde64: 0xc0687c0
    ctx->pc = 0x1FDE64u;
    SET_GPR_U32(ctx, 31, 0x1FDE6Cu);
    ctx->pc = 0x1FDE68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939836)));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE6Cu; }
        else if (ctx->pc != 0x1FDE6Cu) { ctx->pc = 0x1FDE6Cu; }
    }
    if (ctx->pc != 0x1FDE6Cu) { return; }
    ctx->pc = 0x1FDE6Cu;
    // 0x1fde6c: 0x3c010052
    ctx->pc = 0x1fde6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fde70: 0x8c2594c4
    ctx->pc = 0x1fde70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fde74: 0x24030003
    ctx->pc = 0x1fde74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fde78: 0x24020001
    ctx->pc = 0x1fde78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fde7c: 0x8ca40004
    ctx->pc = 0x1fde7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fde80: 0x3c010052
    ctx->pc = 0x1fde80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fde84: 0x42080
    ctx->pc = 0x1fde84u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fde88: 0xa42021
    ctx->pc = 0x1fde88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fde8c: 0x2484000c
    ctx->pc = 0x1fde8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1fde90: 0xac2494c4
    ctx->pc = 0x1fde90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939844), GPR_U32(ctx, 4));
    // 0x1fde94: 0x1000003e
    ctx->pc = 0x1FDE94u;
    {
        const bool branch_taken_0x1fde94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FDE98u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x1fde94) {
            ctx->pc = 0x1FDF90u;
            goto label_1fdf90;
        }
    }
    ctx->pc = 0x1FDE9Cu;
label_1fde9c:
    // 0x1fde9c: 0x8c2694b4
    ctx->pc = 0x1fde9cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939828)));
    // 0x1fdea0: 0x3c020050
    ctx->pc = 0x1fdea0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1fdea4: 0x2444ea24
    ctx->pc = 0x1fdea4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x1fdea8: 0x2402ffc0
    ctx->pc = 0x1fdea8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1fdeac: 0x3c010052
    ctx->pc = 0x1fdeacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdeb0: 0x8c2394bc
    ctx->pc = 0x1fdeb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939836)));
    // 0x1fdeb4: 0x62c03
    ctx->pc = 0x1fdeb4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1fdeb8: 0x30a5ffff
    ctx->pc = 0x1fdeb8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1fdebc: 0x52900
    ctx->pc = 0x1fdebcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fdec0: 0x852021
    ctx->pc = 0x1fdec0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fdec4: 0x8c840000
    ctx->pc = 0x1fdec4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fdec8: 0x2463003f
    ctx->pc = 0x1fdec8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1fdecc: 0x30c6ffff
    ctx->pc = 0x1fdeccu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65535));
    // 0x1fded0: 0x622824
    ctx->pc = 0x1fded0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fded4: 0x61040
    ctx->pc = 0x1fded4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1fded8: 0x461021
    ctx->pc = 0x1fded8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fdedc: 0x21080
    ctx->pc = 0x1fdedcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fdee0: 0x821021
    ctx->pc = 0x1fdee0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fdee4: 0xc06a97c
    ctx->pc = 0x1FDEE4u;
    SET_GPR_U32(ctx, 31, 0x1FDEECu);
    ctx->pc = 0x1FDEE8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1AA5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLinkOneSkinStripData_0x1aa5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEECu; }
        else if (ctx->pc != 0x1FDEECu) { ctx->pc = 0x1FDEECu; }
    }
    if (ctx->pc != 0x1FDEECu) { return; }
    ctx->pc = 0x1FDEECu;
    // 0x1fdeec: 0x3c010052
    ctx->pc = 0x1fdeecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdef0: 0x842794b0
    ctx->pc = 0x1fdef0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fdef4: 0x3c020050
    ctx->pc = 0x1fdef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1fdef8: 0x2443ea24
    ctx->pc = 0x1fdef8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x1fdefc: 0x3c020051
    ctx->pc = 0x1fdefcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1fdf00: 0x244525f0
    ctx->pc = 0x1fdf00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 9712));
    // 0x1fdf04: 0x24020001
    ctx->pc = 0x1fdf04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdf08: 0x3c010052
    ctx->pc = 0x1fdf08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdf0c: 0x8c2894b4
    ctx->pc = 0x1fdf0cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294939828)));
    // 0x1fdf10: 0x82403
    ctx->pc = 0x1fdf10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 16));
    // 0x1fdf14: 0x3084ffff
    ctx->pc = 0x1fdf14u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1fdf18: 0x42100
    ctx->pc = 0x1fdf18u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fdf1c: 0x641821
    ctx->pc = 0x1fdf1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdf20: 0x8c660000
    ctx->pc = 0x1fdf20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fdf24: 0x3104ffff
    ctx->pc = 0x1fdf24u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 8), 65535));
    // 0x1fdf28: 0x3c010052
    ctx->pc = 0x1fdf28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdf2c: 0x41840
    ctx->pc = 0x1fdf2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1fdf30: 0x641821
    ctx->pc = 0x1fdf30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdf34: 0x32080
    ctx->pc = 0x1fdf34u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fdf38: 0x862021
    ctx->pc = 0x1fdf38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1fdf3c: 0xa4870004
    ctx->pc = 0x1fdf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1fdf40: 0x8c2794bc
    ctx->pc = 0x1fdf40u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294939836)));
    // 0x1fdf44: 0x3c030052
    ctx->pc = 0x1fdf44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x1fdf48: 0x246494d0
    ctx->pc = 0x1fdf48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294939856));
    // 0x1fdf4c: 0x24030003
    ctx->pc = 0x1fdf4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fdf50: 0x3c010052
    ctx->pc = 0x1fdf50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdf54: 0x8c2694b0
    ctx->pc = 0x1fdf54u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fdf58: 0x862021
    ctx->pc = 0x1fdf58u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1fdf5c: 0x63080
    ctx->pc = 0x1fdf5cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fdf60: 0xa62821
    ctx->pc = 0x1fdf60u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fdf64: 0xaca70000
    ctx->pc = 0x1fdf64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x1fdf68: 0xa0820000
    ctx->pc = 0x1fdf68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fdf6c: 0x3c010052
    ctx->pc = 0x1fdf6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdf70: 0x8c2594c4
    ctx->pc = 0x1fdf70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fdf74: 0x8ca40004
    ctx->pc = 0x1fdf74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fdf78: 0x3c010052
    ctx->pc = 0x1fdf78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdf7c: 0x42080
    ctx->pc = 0x1fdf7cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fdf80: 0xa42021
    ctx->pc = 0x1fdf80u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fdf84: 0x2484000c
    ctx->pc = 0x1fdf84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1fdf88: 0xac2494c4
    ctx->pc = 0x1fdf88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939844), GPR_U32(ctx, 4));
    // 0x1fdf8c: 0xae03000c
    ctx->pc = 0x1fdf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1fdf90:
    // 0x1fdf90: 0x7bbf0010
    ctx->pc = 0x1fdf90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdf94: 0x7bb00000
    ctx->pc = 0x1fdf94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdf98: 0x3e00008
    ctx->pc = 0x1FDF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDF9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FDE10u: goto label_1fde10;
            case 0x1FDE38u: goto label_1fde38;
            case 0x1FDE9Cu: goto label_1fde9c;
            case 0x1FDF90u: goto label_1fdf90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FDFA0u;
}
