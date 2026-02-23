#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_RingAddSub
// Address: 0x191e98 - 0x191fd0
void sfbuf_RingAddSub_0x191e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_RingAddSub");


    ctx->pc = 0x191e98u;

    // 0x191e98: 0x24020388
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x191e9c: 0x27bdff70
    ctx->pc = 0x191e9cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x191ea0: 0xa22818
    ctx->pc = 0x191ea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x191ea4: 0xffb50060
    ctx->pc = 0x191ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x191ea8: 0x80a82d
    ctx->pc = 0x191ea8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191eac: 0xffb60070
    ctx->pc = 0x191eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x191eb0: 0x26a30d34
    ctx->pc = 0x191eb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 3380));
    // 0x191eb4: 0xffb40050
    ctx->pc = 0x191eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x191eb8: 0xffb30040
    ctx->pc = 0x191eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x191ebc: 0xe0a02d
    ctx->pc = 0x191ebcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ec0: 0xffb10020
    ctx->pc = 0x191ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x191ec4: 0x651821
    ctx->pc = 0x191ec4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x191ec8: 0xffbf0080
    ctx->pc = 0x191ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x191ecc: 0x24710010
    ctx->pc = 0x191eccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 16));
    // 0x191ed0: 0xffb00010
    ctx->pc = 0x191ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x191ed4: 0xc0982d
    ctx->pc = 0x191ed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ed8: 0xffb20030
    ctx->pc = 0x191ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x191edc: 0xb02d
    ctx->pc = 0x191edcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ee0: 0x8e320004
    ctx->pc = 0x191ee0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x191ee4: 0x12600030
    ctx->pc = 0x191EE4u;
    {
        const bool branch_taken_0x191ee4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x191EE8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191ee4) {
            ctx->pc = 0x191FA8u;
            goto label_191fa8;
        }
    }
    ctx->pc = 0x191EECu;
    // 0x191eec: 0x8c620004
    ctx->pc = 0x191eecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x191ef0: 0x1040002d
    ctx->pc = 0x191EF0u;
    {
        const bool branch_taken_0x191ef0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x191EF4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191ef0) {
            ctx->pc = 0x191FA8u;
            goto label_191fa8;
        }
    }
    ctx->pc = 0x191EF8u;
    // 0x191ef8: 0x1240002c
    ctx->pc = 0x191EF8u;
    {
        const bool branch_taken_0x191ef8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x191EFCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x191ef8) {
            ctx->pc = 0x191FACu;
            goto label_191fac;
        }
    }
    ctx->pc = 0x191F00u;
    // 0x191f00: 0xc064f3a
    ctx->pc = 0x191F00u;
    SET_GPR_U32(ctx, 31, 0x191F08u);
    ctx->pc = 0x191F04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F08u; }
        else if (ctx->pc != 0x191F08u) { ctx->pc = 0x191F08u; }
    }
    if (ctx->pc != 0x191F08u) { return; }
    ctx->pc = 0x191F08u;
    // 0x191f08: 0x240202d
    ctx->pc = 0x191f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f0c: 0x280282d
    ctx->pc = 0x191f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f10: 0xc06483a
    ctx->pc = 0x191F10u;
    SET_GPR_U32(ctx, 31, 0x191F18u);
    ctx->pc = 0x191F14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1920E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_MoveChunk_0x1920e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F18u; }
        else if (ctx->pc != 0x191F18u) { ctx->pc = 0x191F18u; }
    }
    if (ctx->pc != 0x191F18u) { return; }
    ctx->pc = 0x191F18u;
    // 0x191f18: 0x40182d
    ctx->pc = 0x191f18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f1c: 0x73102a
    ctx->pc = 0x191f1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 19)));
    // 0x191f20: 0x1040000c
    ctx->pc = 0x191F20u;
    {
        const bool branch_taken_0x191f20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x191F24u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        if (branch_taken_0x191f20) {
            ctx->pc = 0x191F54u;
            goto label_191f54;
        }
    }
    ctx->pc = 0x191F28u;
    // 0x191f28: 0x240202d
    ctx->pc = 0x191f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f2c: 0x280282d
    ctx->pc = 0x191f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f30: 0xc06483a
    ctx->pc = 0x191F30u;
    SET_GPR_U32(ctx, 31, 0x191F38u);
    ctx->pc = 0x191F34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1920E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_MoveChunk_0x1920e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F38u; }
        else if (ctx->pc != 0x191F38u) { ctx->pc = 0x191F38u; }
    }
    if (ctx->pc != 0x191F38u) { return; }
    ctx->pc = 0x191F38u;
    // 0x191f38: 0x50102a
    ctx->pc = 0x191f38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x191f3c: 0x10400005
    ctx->pc = 0x191F3Cu;
    {
        const bool branch_taken_0x191f3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x191F40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191f3c) {
            ctx->pc = 0x191F54u;
            goto label_191f54;
        }
    }
    ctx->pc = 0x191F44u;
    // 0x191f44: 0x3c05ff00
    ctx->pc = 0x191f44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x191f48: 0xc064ea0
    ctx->pc = 0x191F48u;
    SET_GPR_U32(ctx, 31, 0x191F50u);
    ctx->pc = 0x191F4Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1035));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F50u; }
        else if (ctx->pc != 0x191F50u) { ctx->pc = 0x191F50u; }
    }
    if (ctx->pc != 0x191F50u) { return; }
    ctx->pc = 0x191F50u;
    // 0x191f50: 0x40b02d
    ctx->pc = 0x191f50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191f54:
    // 0x191f54: 0x24020001
    ctx->pc = 0x191f54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x191f58: 0x5682000b
    ctx->pc = 0x191F58u;
    {
        const bool branch_taken_0x191f58 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        if (branch_taken_0x191f58) {
            ctx->pc = 0x191F5Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->pc = 0x191F88u;
            goto label_191f88;
        }
    }
    ctx->pc = 0x191F60u;
    // 0x191f60: 0x8e220014
    ctx->pc = 0x191f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x191f64: 0x50400004
    ctx->pc = 0x191F64u;
    {
        const bool branch_taken_0x191f64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x191f64) {
            ctx->pc = 0x191F68u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->pc = 0x191F78u;
            goto label_191f78;
        }
    }
    ctx->pc = 0x191F6Cu;
    // 0x191f6c: 0xc0647f4
    ctx->pc = 0x191F6Cu;
    SET_GPR_U32(ctx, 31, 0x191F74u);
    ctx->pc = 0x191F70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_ResetConti_0x191fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F74u; }
        else if (ctx->pc != 0x191F74u) { ctx->pc = 0x191F74u; }
    }
    if (ctx->pc != 0x191F74u) { return; }
    ctx->pc = 0x191F74u;
    // 0x191f74: 0x8e22002c
    ctx->pc = 0x191f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_191f78:
    // 0x191f78: 0x4400006
    ctx->pc = 0x191F78u;
    {
        const bool branch_taken_0x191f78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x191F7Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x191f78) {
            ctx->pc = 0x191F94u;
            goto label_191f94;
        }
    }
    ctx->pc = 0x191F80u;
    // 0x191f80: 0x10000004
    ctx->pc = 0x191F80u;
    {
        const bool branch_taken_0x191f80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x191F84u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x191f80) {
            ctx->pc = 0x191F94u;
            goto label_191f94;
        }
    }
    ctx->pc = 0x191F88u;
label_191f88:
    // 0x191f88: 0x4400002
    ctx->pc = 0x191F88u;
    {
        const bool branch_taken_0x191f88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x191F8Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x191f88) {
            ctx->pc = 0x191F94u;
            goto label_191f94;
        }
    }
    ctx->pc = 0x191F90u;
    // 0x191f90: 0xae220028
    ctx->pc = 0x191f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_191f94:
    // 0x191f94: 0x24020001
    ctx->pc = 0x191f94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x191f98: 0x3a0202d
    ctx->pc = 0x191f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f9c: 0xc064f44
    ctx->pc = 0x191F9Cu;
    SET_GPR_U32(ctx, 31, 0x191FA4u);
    ctx->pc = 0x191FA0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191FA4u; }
        else if (ctx->pc != 0x191FA4u) { ctx->pc = 0x191FA4u; }
    }
    if (ctx->pc != 0x191FA4u) { return; }
    ctx->pc = 0x191FA4u;
    // 0x191fa4: 0x2c0102d
    ctx->pc = 0x191fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_191fa8:
    // 0x191fa8: 0xdfbf0080
    ctx->pc = 0x191fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_191fac:
    // 0x191fac: 0xdfb60070
    ctx->pc = 0x191facu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191fb0: 0xdfb50060
    ctx->pc = 0x191fb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x191fb4: 0xdfb40050
    ctx->pc = 0x191fb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191fb8: 0xdfb30040
    ctx->pc = 0x191fb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191fbc: 0xdfb20030
    ctx->pc = 0x191fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191fc0: 0xdfb10020
    ctx->pc = 0x191fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191fc4: 0xdfb00010
    ctx->pc = 0x191fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191fc8: 0x3e00008
    ctx->pc = 0x191FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191FCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191F54u: goto label_191f54;
            case 0x191F78u: goto label_191f78;
            case 0x191F88u: goto label_191f88;
            case 0x191F94u: goto label_191f94;
            case 0x191FA8u: goto label_191fa8;
            case 0x191FACu: goto label_191fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191FD0u;
}
