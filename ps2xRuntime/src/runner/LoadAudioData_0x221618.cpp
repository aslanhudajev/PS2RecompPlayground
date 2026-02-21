#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadAudioData
// Address: 0x221618 - 0x2216dc
void LoadAudioData_0x221618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221618u;

    // 0x221618: 0x27bdffe0
    ctx->pc = 0x221618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22161c: 0xffbf0010
    ctx->pc = 0x22161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221620: 0xffb00000
    ctx->pc = 0x221620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221624: 0x3c100032
    ctx->pc = 0x221624u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x221628: 0x3c04003a
    ctx->pc = 0x221628u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22162c: 0x24846808
    ctx->pc = 0x22162cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26632));
    // 0x221630: 0x3c05003a
    ctx->pc = 0x221630u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x221634: 0xc0b4e96
    ctx->pc = 0x221634u;
    SET_GPR_U32(ctx, 31, 0x22163Cu);
    ctx->pc = 0x221638u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26704));
    ctx->pc = 0x2D3A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocFile_0x2d3a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22163Cu; }
    }
    if (ctx->pc != 0x22163Cu) { return; }
    ctx->pc = 0x22163Cu;
    // 0x22163c: 0xae02fd6c
    ctx->pc = 0x22163cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966636), GPR_U32(ctx, 2));
    // 0x221640: 0x8c43000c
    ctx->pc = 0x221640u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x221644: 0x431821
    ctx->pc = 0x221644u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221648: 0xac43000c
    ctx->pc = 0x221648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x22164c: 0x8c430010
    ctx->pc = 0x22164cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x221650: 0x431821
    ctx->pc = 0x221650u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221654: 0xac430010
    ctx->pc = 0x221654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x221658: 0x8c430014
    ctx->pc = 0x221658u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22165c: 0x431821
    ctx->pc = 0x22165cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221660: 0xac430014
    ctx->pc = 0x221660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x221664: 0x3c100032
    ctx->pc = 0x221664u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x221668: 0x8e0206f0
    ctx->pc = 0x221668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1776)));
    // 0x22166c: 0x14400018
    ctx->pc = 0x22166Cu;
    {
        const bool branch_taken_0x22166c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221670u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x22166c) {
            ctx->pc = 0x2216D0u;
            goto label_2216d0;
        }
    }
    ctx->pc = 0x221674u;
    // 0x221674: 0x3c04003a
    ctx->pc = 0x221674u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x221678: 0x24846860
    ctx->pc = 0x221678u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26720));
    // 0x22167c: 0xc0b4a34
    ctx->pc = 0x22167Cu;
    SET_GPR_U32(ctx, 31, 0x221684u);
    ctx->pc = 0x221680u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4864));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221684u; }
    }
    if (ctx->pc != 0x221684u) { return; }
    ctx->pc = 0x221684u;
    // 0x221684: 0x3c04004c
    ctx->pc = 0x221684u;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x221688: 0xc0b7212
    ctx->pc = 0x221688u;
    SET_GPR_U32(ctx, 31, 0x221690u);
    ctx->pc = 0x22168Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DC848u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem64_0x2dc848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221690u; }
    }
    if (ctx->pc != 0x221690u) { return; }
    ctx->pc = 0x221690u;
    // 0x221690: 0x14400008
    ctx->pc = 0x221690u;
    {
        const bool branch_taken_0x221690 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221694u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1776), GPR_U32(ctx, 2));
        if (branch_taken_0x221690) {
            ctx->pc = 0x2216B4u;
            goto label_2216b4;
        }
    }
    ctx->pc = 0x221698u;
    // 0x221698: 0x3c04003a
    ctx->pc = 0x221698u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22169c: 0x24846880
    ctx->pc = 0x22169cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26752));
    // 0x2216a0: 0x3c05004c
    ctx->pc = 0x2216a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)76 << 16));
    // 0x2216a4: 0xdfbf0010
    ctx->pc = 0x2216a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2216a8: 0xdfb00000
    ctx->pc = 0x2216a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2216ac: 0x80b492e
    ctx->pc = 0x2216ACu;
    ctx->pc = 0x2216B0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D24B8u;
    Errorf_0x2d24b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2216B4u;
label_2216b4:
    // 0x2216b4: 0x3c04003a
    ctx->pc = 0x2216b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2216b8: 0x248468a8
    ctx->pc = 0x2216b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26792));
    // 0x2216bc: 0x3c05004c
    ctx->pc = 0x2216bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)76 << 16));
    // 0x2216c0: 0xdfbf0010
    ctx->pc = 0x2216c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2216c4: 0xdfb00000
    ctx->pc = 0x2216c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2216c8: 0x80b4a34
    ctx->pc = 0x2216C8u;
    ctx->pc = 0x2216CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D28D0u;
    LogfilePrintf_0x2d28d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2216D0u;
label_2216d0:
    // 0x2216d0: 0xdfb00000
    ctx->pc = 0x2216d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2216d4: 0x3e00008
    ctx->pc = 0x2216D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2216D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2216B4u: goto label_2216b4;
            case 0x2216D0u: goto label_2216d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2216DCu;
}
