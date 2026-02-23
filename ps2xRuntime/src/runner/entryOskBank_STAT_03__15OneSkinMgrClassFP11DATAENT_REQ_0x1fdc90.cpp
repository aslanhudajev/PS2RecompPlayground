#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskBank_STAT_03__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fdc90 - 0x1fddf0
void entryOskBank_STAT_03__15OneSkinMgrClassFP11DATAENT_REQ_0x1fdc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskBank_STAT_03__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fdc90u;

    // 0x1fdc90: 0x27bdffe0
    ctx->pc = 0x1fdc90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fdc94: 0x7fbf0010
    ctx->pc = 0x1fdc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fdc98: 0x7fb00000
    ctx->pc = 0x1fdc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fdc9c: 0x3c010052
    ctx->pc = 0x1fdc9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdca0: 0x8c2394c4
    ctx->pc = 0x1fdca0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fdca4: 0x3c020027
    ctx->pc = 0x1fdca4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fdca8: 0x2442cfb0
    ctx->pc = 0x1fdca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954928));
    // 0x1fdcac: 0x8c630000
    ctx->pc = 0x1fdcacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fdcb0: 0x3c010052
    ctx->pc = 0x1fdcb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdcb4: 0xac2394b0
    ctx->pc = 0x1fdcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939824), GPR_U32(ctx, 3));
    // 0x1fdcb8: 0x3c010052
    ctx->pc = 0x1fdcb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdcbc: 0x8c2394b0
    ctx->pc = 0x1fdcbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fdcc0: 0x31880
    ctx->pc = 0x1fdcc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fdcc4: 0x431021
    ctx->pc = 0x1fdcc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdcc8: 0x8c420000
    ctx->pc = 0x1fdcc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fdccc: 0x3c010052
    ctx->pc = 0x1fdcccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdcd0: 0xac2294b4
    ctx->pc = 0x1fdcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939828), GPR_U32(ctx, 2));
    // 0x1fdcd4: 0x3c010052
    ctx->pc = 0x1fdcd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdcd8: 0x8c2394b0
    ctx->pc = 0x1fdcd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fdcdc: 0x4600036
    ctx->pc = 0x1FDCDCu;
    {
        const bool branch_taken_0x1fdcdc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FDCE0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fdcdc) {
            ctx->pc = 0x1FDDB8u;
            goto label_1fddb8;
        }
    }
    ctx->pc = 0x1FDCE4u;
    // 0x1fdce4: 0x3c020052
    ctx->pc = 0x1fdce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fdce8: 0x244294d0
    ctx->pc = 0x1fdce8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fdcec: 0x431021
    ctx->pc = 0x1fdcecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdcf0: 0x80420000
    ctx->pc = 0x1fdcf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fdcf4: 0x14400028
    ctx->pc = 0x1FDCF4u;
    {
        const bool branch_taken_0x1fdcf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FDCF8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
        if (branch_taken_0x1fdcf4) {
            ctx->pc = 0x1FDD98u;
            goto label_1fdd98;
        }
    }
    ctx->pc = 0x1FDCFCu;
    // 0x1fdcfc: 0x3c010052
    ctx->pc = 0x1fdcfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdd00: 0x8c2394c4
    ctx->pc = 0x1fdd00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fdd04: 0x8f828c5c
    ctx->pc = 0x1fdd04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x1fdd08: 0x8c630008
    ctx->pc = 0x1fdd08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fdd0c: 0x3c010052
    ctx->pc = 0x1fdd0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdd10: 0x10400008
    ctx->pc = 0x1FDD10u;
    {
        const bool branch_taken_0x1fdd10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FDD14u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294939832), GPR_U32(ctx, 3));
        if (branch_taken_0x1fdd10) {
            ctx->pc = 0x1FDD34u;
            goto label_1fdd34;
        }
    }
    ctx->pc = 0x1FDD18u;
    // 0x1fdd18: 0x3c010052
    ctx->pc = 0x1fdd18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdd1c: 0x8c2294b8
    ctx->pc = 0x1fdd1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939832)));
    // 0x1fdd20: 0xc08551c
    ctx->pc = 0x1FDD20u;
    SET_GPR_U32(ctx, 31, 0x1FDD28u);
    ctx->pc = 0x1FDD24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x215470u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPolCommonBuf__Fi_0x215470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD28u; }
        else if (ctx->pc != 0x1FDD28u) { ctx->pc = 0x1FDD28u; }
    }
    if (ctx->pc != 0x1FDD28u) { return; }
    ctx->pc = 0x1FDD28u;
    // 0x1fdd28: 0x3c010052
    ctx->pc = 0x1fdd28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdd2c: 0x10000007
    ctx->pc = 0x1FDD2Cu;
    {
        const bool branch_taken_0x1fdd2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FDD30u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294939836), GPR_U32(ctx, 2));
        if (branch_taken_0x1fdd2c) {
            ctx->pc = 0x1FDD4Cu;
            goto label_1fdd4c;
        }
    }
    ctx->pc = 0x1FDD34u;
label_1fdd34:
    // 0x1fdd34: 0x3c010052
    ctx->pc = 0x1fdd34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdd38: 0x8c2294b8
    ctx->pc = 0x1fdd38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939832)));
    // 0x1fdd3c: 0xc06878c
    ctx->pc = 0x1FDD3Cu;
    SET_GPR_U32(ctx, 31, 0x1FDD44u);
    ctx->pc = 0x1FDD40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD44u; }
        else if (ctx->pc != 0x1FDD44u) { ctx->pc = 0x1FDD44u; }
    }
    if (ctx->pc != 0x1FDD44u) { return; }
    ctx->pc = 0x1FDD44u;
    // 0x1fdd44: 0x3c010052
    ctx->pc = 0x1fdd44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdd48: 0xac2294bc
    ctx->pc = 0x1fdd48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939836), GPR_U32(ctx, 2));
label_1fdd4c:
    // 0x1fdd4c: 0x3c010052
    ctx->pc = 0x1fdd4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdd50: 0x8c2494b0
    ctx->pc = 0x1fdd50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fdd54: 0x3c020052
    ctx->pc = 0x1fdd54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fdd58: 0x244394d0
    ctx->pc = 0x1fdd58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fdd5c: 0x2405ffff
    ctx->pc = 0x1fdd5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fdd60: 0x2402ffc0
    ctx->pc = 0x1fdd60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1fdd64: 0x641821
    ctx->pc = 0x1fdd64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdd68: 0xa0650000
    ctx->pc = 0x1fdd68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fdd6c: 0x3c010052
    ctx->pc = 0x1fdd6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdd70: 0x8c2494c4
    ctx->pc = 0x1fdd70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fdd74: 0x3c010052
    ctx->pc = 0x1fdd74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdd78: 0x8c2394bc
    ctx->pc = 0x1fdd78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939836)));
    // 0x1fdd7c: 0x2484000c
    ctx->pc = 0x1fdd7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1fdd80: 0x2463003f
    ctx->pc = 0x1fdd80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1fdd84: 0xc079604
    ctx->pc = 0x1FDD84u;
    SET_GPR_U32(ctx, 31, 0x1FDD8Cu);
    ctx->pc = 0x1FDD88u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1E5810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpandEntry_0x1e5810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD8Cu; }
        else if (ctx->pc != 0x1FDD8Cu) { ctx->pc = 0x1FDD8Cu; }
    }
    if (ctx->pc != 0x1FDD8Cu) { return; }
    ctx->pc = 0x1FDD8Cu;
    // 0x1fdd8c: 0x24020004
    ctx->pc = 0x1fdd8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fdd90: 0x10000012
    ctx->pc = 0x1FDD90u;
    {
        const bool branch_taken_0x1fdd90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FDD94u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1fdd90) {
            ctx->pc = 0x1FDDDCu;
            goto label_1fdddc;
        }
    }
    ctx->pc = 0x1FDD98u;
label_1fdd98:
    // 0x1fdd98: 0x8c2394c4
    ctx->pc = 0x1fdd98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fdd9c: 0x8c620004
    ctx->pc = 0x1fdd9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fdda0: 0x3c010052
    ctx->pc = 0x1fdda0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fdda4: 0x21080
    ctx->pc = 0x1fdda4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fdda8: 0x621021
    ctx->pc = 0x1fdda8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fddac: 0x2442000c
    ctx->pc = 0x1fddacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1fddb0: 0x1000000a
    ctx->pc = 0x1FDDB0u;
    {
        const bool branch_taken_0x1fddb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FDDB4u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294939844), GPR_U32(ctx, 2));
        if (branch_taken_0x1fddb0) {
            ctx->pc = 0x1FDDDCu;
            goto label_1fdddc;
        }
    }
    ctx->pc = 0x1FDDB8u;
label_1fddb8:
    // 0x1fddb8: 0x3c010052
    ctx->pc = 0x1fddb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fddbc: 0x8c2494c8
    ctx->pc = 0x1fddbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939848)));
    // 0x1fddc0: 0x3c020052
    ctx->pc = 0x1fddc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fddc4: 0x24439860
    ctx->pc = 0x1fddc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294940768));
    // 0x1fddc8: 0x24050001
    ctx->pc = 0x1fddc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fddcc: 0x2402ffff
    ctx->pc = 0x1fddccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fddd0: 0x641821
    ctx->pc = 0x1fddd0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fddd4: 0x10000002
    ctx->pc = 0x1FDDD4u;
    {
        const bool branch_taken_0x1fddd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FDDD8u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        if (branch_taken_0x1fddd4) {
            ctx->pc = 0x1FDDE0u;
            goto label_1fdde0;
        }
    }
    ctx->pc = 0x1FDDDCu;
label_1fdddc:
    // 0x1fdddc: 0x24020001
    ctx->pc = 0x1fdddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1fdde0:
    // 0x1fdde0: 0x7bbf0010
    ctx->pc = 0x1fdde0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdde4: 0x7bb00000
    ctx->pc = 0x1fdde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdde8: 0x3e00008
    ctx->pc = 0x1FDDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDDECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FDD34u: goto label_1fdd34;
            case 0x1FDD4Cu: goto label_1fdd4c;
            case 0x1FDD98u: goto label_1fdd98;
            case 0x1FDDB8u: goto label_1fddb8;
            case 0x1FDDDCu: goto label_1fdddc;
            case 0x1FDDE0u: goto label_1fdde0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FDDF0u;
}
