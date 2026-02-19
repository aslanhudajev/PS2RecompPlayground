#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddItem
// Address: 0x253950 - 0x2539bc
void AddItem_0x253950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253950u;

    // 0x253950: 0x27bdffd0
    ctx->pc = 0x253950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253954: 0xffbf0020
    ctx->pc = 0x253954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x253958: 0xffb10010
    ctx->pc = 0x253958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25395c: 0xffb00000
    ctx->pc = 0x25395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253960: 0xc0802d
    ctx->pc = 0x253960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253964: 0xc094e02
    ctx->pc = 0x253964u;
    SET_GPR_U32(ctx, 31, 0x25396Cu);
    ctx->pc = 0x253968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253808u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindInfoIndex_0x253808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25396Cu; }
    }
    if (ctx->pc != 0x25396Cu) { return; }
    ctx->pc = 0x25396Cu;
    // 0x25396c: 0x40182d
    ctx->pc = 0x25396cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253970: 0x4610007
    ctx->pc = 0x253970u;
    {
        const bool branch_taken_0x253970 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x253974u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x253970) {
            ctx->pc = 0x253990u;
            goto label_253990;
        }
    }
    ctx->pc = 0x253978u;
    // 0x253978: 0x3c04003b
    ctx->pc = 0x253978u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x25397c: 0x248489d0
    ctx->pc = 0x25397cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937040));
    // 0x253980: 0xc0b492e
    ctx->pc = 0x253980u;
    SET_GPR_U32(ctx, 31, 0x253988u);
    ctx->pc = 0x253984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253988u; }
    }
    if (ctx->pc != 0x253988u) { return; }
    ctx->pc = 0x253988u;
    // 0x253988: 0x10000007
    ctx->pc = 0x253988u;
    {
        const bool branch_taken_0x253988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25398Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x253988) {
            ctx->pc = 0x2539A8u;
            goto label_2539a8;
        }
    }
    ctx->pc = 0x253990u;
label_253990:
    // 0x253990: 0x24040050
    ctx->pc = 0x253990u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
    // 0x253994: 0x642018
    ctx->pc = 0x253994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x253998: 0x8c42fa60
    ctx->pc = 0x253998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965856)));
    // 0x25399c: 0x822021
    ctx->pc = 0x25399cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2539a0: 0xc094e34
    ctx->pc = 0x2539A0u;
    SET_GPR_U32(ctx, 31, 0x2539A8u);
    ctx->pc = 0x2539A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2538D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddItemSub_0x2538d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539A8u; }
    }
    if (ctx->pc != 0x2539A8u) { return; }
    ctx->pc = 0x2539A8u;
label_2539a8:
    // 0x2539a8: 0xdfbf0020
    ctx->pc = 0x2539a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2539ac: 0xdfb10010
    ctx->pc = 0x2539acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2539b0: 0xdfb00000
    ctx->pc = 0x2539b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2539b4: 0x3e00008
    ctx->pc = 0x2539B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2539B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253990u: goto label_253990;
            case 0x2539A8u: goto label_2539a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2539BCu;
}
