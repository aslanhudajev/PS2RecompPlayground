#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loop__12MviTransTaskFv
// Address: 0x216050 - 0x2160d0
void loop__12MviTransTaskFv_0x216050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loop__12MviTransTaskFv");


    ctx->pc = 0x216050u;

    // 0x216050: 0x27bdffb0
    ctx->pc = 0x216050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x216054: 0x7fbf0010
    ctx->pc = 0x216054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x216058: 0x7fb00000
    ctx->pc = 0x216058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21605c: 0x70808628
    ctx->pc = 0x21605cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x216060: 0x3c011200
    ctx->pc = 0x216060u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4608 << 16));
    // 0x216064: 0xdc241000
    ctx->pc = 0x216064u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 4096)));
    // 0x216068: 0x24030001
    ctx->pc = 0x216068u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21606c: 0x4237a
    ctx->pc = 0x21606cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 13);
    // 0x216070: 0x802027
    ctx->pc = 0x216070u;
    SET_GPR_U32(ctx, 4, NOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x216074: 0x30840001
    ctx->pc = 0x216074u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x216078: 0x4203c
    ctx->pc = 0x216078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x21607c: 0x4203f
    ctx->pc = 0x21607cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x216080: 0x1483000f
    ctx->pc = 0x216080u;
    {
        const bool branch_taken_0x216080 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x216080) {
            ctx->pc = 0x2160C0u;
            goto label_2160c0;
        }
    }
    ctx->pc = 0x216088u;
    // 0x216088: 0x8e020008
    ctx->pc = 0x216088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21608c: 0x8c440000
    ctx->pc = 0x21608cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216090: 0xc063642
    ctx->pc = 0x216090u;
    SET_GPR_U32(ctx, 31, 0x216098u);
    ctx->pc = 0x216094u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x18D908u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyGetCurFrm_0x18d908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216098u; }
        else if (ctx->pc != 0x216098u) { ctx->pc = 0x216098u; }
    }
    if (ctx->pc != 0x216098u) { return; }
    ctx->pc = 0x216098u;
    // 0x216098: 0x8fa40020
    ctx->pc = 0x216098u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21609c: 0x10800008
    ctx->pc = 0x21609Cu;
    {
        const bool branch_taken_0x21609c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x21609c) {
            ctx->pc = 0x2160C0u;
            goto label_2160c0;
        }
    }
    ctx->pc = 0x2160A4u;
    // 0x2160a4: 0x8fa6002c
    ctx->pc = 0x2160a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2160a8: 0x8e070004
    ctx->pc = 0x2160a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2160ac: 0xc085794
    ctx->pc = 0x2160ACu;
    SET_GPR_U32(ctx, 31, 0x2160B4u);
    ctx->pc = 0x2160B0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x215E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        UsrLoadMvFrm__FPUciiP10TexSurface_0x215e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2160B4u; }
        else if (ctx->pc != 0x2160B4u) { ctx->pc = 0x2160B4u; }
    }
    if (ctx->pc != 0x2160B4u) { return; }
    ctx->pc = 0x2160B4u;
    // 0x2160b4: 0x8e020008
    ctx->pc = 0x2160b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2160b8: 0xc063742
    ctx->pc = 0x2160B8u;
    SET_GPR_U32(ctx, 31, 0x2160C0u);
    ctx->pc = 0x2160BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x18DD08u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyRelCurFrm_0x18dd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2160C0u; }
        else if (ctx->pc != 0x2160C0u) { ctx->pc = 0x2160C0u; }
    }
    if (ctx->pc != 0x2160C0u) { return; }
    ctx->pc = 0x2160C0u;
label_2160c0:
    // 0x2160c0: 0x7bbf0010
    ctx->pc = 0x2160c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2160c4: 0x7bb00000
    ctx->pc = 0x2160c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2160c8: 0x3e00008
    ctx->pc = 0x2160C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2160CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2160C0u: goto label_2160c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2160D0u;
}
