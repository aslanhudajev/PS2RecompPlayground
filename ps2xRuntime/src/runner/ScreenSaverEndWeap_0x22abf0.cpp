#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScreenSaverEndWeap
// Address: 0x22abf0 - 0x22ac44
void ScreenSaverEndWeap_0x22abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22abf0u;

    // 0x22abf0: 0x27bdffd0
    ctx->pc = 0x22abf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22abf4: 0xffbf0020
    ctx->pc = 0x22abf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22abf8: 0xffb10010
    ctx->pc = 0x22abf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22abfc: 0xffb00000
    ctx->pc = 0x22abfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ac00: 0x24020090
    ctx->pc = 0x22ac00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
    // 0x22ac04: 0x828818
    ctx->pc = 0x22ac04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22ac08: 0x3c10003c
    ctx->pc = 0x22ac08u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x22ac0c: 0x26101900
    ctx->pc = 0x22ac0cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 6400));
    // 0x22ac10: 0xc08496c
    ctx->pc = 0x22AC10u;
    SET_GPR_U32(ctx, 31, 0x22AC18u);
    ctx->pc = 0x22AC14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AC18u; }
    }
    if (ctx->pc != 0x22AC18u) { return; }
    ctx->pc = 0x22AC18u;
    // 0x22ac18: 0x2610ffc0
    ctx->pc = 0x22ac18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x22ac1c: 0x2308821
    ctx->pc = 0x22ac1cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22ac20: 0x8e24003c
    ctx->pc = 0x22ac20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x22ac24: 0xc0b3f1a
    ctx->pc = 0x22AC24u;
    SET_GPR_U32(ctx, 31, 0x22AC2Cu);
    ctx->pc = 0x22AC28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AC2Cu; }
    }
    if (ctx->pc != 0x22AC2Cu) { return; }
    ctx->pc = 0x22AC2Cu;
    // 0x22ac2c: 0xae22003c
    ctx->pc = 0x22ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x22ac30: 0xdfbf0020
    ctx->pc = 0x22ac30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ac34: 0xdfb10010
    ctx->pc = 0x22ac34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ac38: 0xdfb00000
    ctx->pc = 0x22ac38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ac3c: 0x3e00008
    ctx->pc = 0x22AC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AC40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AC44u;
}
