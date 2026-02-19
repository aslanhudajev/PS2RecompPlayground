#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCameraCalc
// Address: 0x2ab9c8 - 0x2aba3c
void pbCameraCalc_0x2ab9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab9c8u;

    // 0x2ab9c8: 0x27bdffe0
    ctx->pc = 0x2ab9c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab9cc: 0xffbf0010
    ctx->pc = 0x2ab9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab9d0: 0xffb00000
    ctx->pc = 0x2ab9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab9d4: 0x3c020036
    ctx->pc = 0x2ab9d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab9d8: 0x8c50dee0
    ctx->pc = 0x2ab9d8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ab9dc: 0x8e050004
    ctx->pc = 0x2ab9dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ab9e0: 0x24a50030
    ctx->pc = 0x2ab9e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    // 0x2ab9e4: 0xc0b9514
    ctx->pc = 0x2AB9E4u;
    SET_GPR_U32(ctx, 31, 0x2AB9ECu);
    ctx->pc = 0x2AB9E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x2e5450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB9ECu; }
    }
    if (ctx->pc != 0x2AB9ECu) { return; }
    ctx->pc = 0x2AB9ECu;
    // 0x2ab9ec: 0x8e070004
    ctx->pc = 0x2ab9ecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ab9f0: 0x24e40210
    ctx->pc = 0x2ab9f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 528));
    // 0x2ab9f4: 0x24e50020
    ctx->pc = 0x2ab9f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 7), 32));
    // 0x2ab9f8: 0x24e60030
    ctx->pc = 0x2ab9f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 48));
    // 0x2ab9fc: 0xc0b9670
    ctx->pc = 0x2AB9FCu;
    SET_GPR_U32(ctx, 31, 0x2ABA04u);
    ctx->pc = 0x2ABA00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 64));
    ctx->pc = 0x2E59C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CameraMatrix_0x2e59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA04u; }
    }
    if (ctx->pc != 0x2ABA04u) { return; }
    ctx->pc = 0x2ABA04u;
    // 0x2aba04: 0x8e050004
    ctx->pc = 0x2aba04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aba08: 0x24a40020
    ctx->pc = 0x2aba08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 32));
    // 0x2aba0c: 0xc0a8e46
    ctx->pc = 0x2ABA0Cu;
    SET_GPR_U32(ctx, 31, 0x2ABA14u);
    ctx->pc = 0x2ABA10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    ctx->pc = 0x2A3918u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBCamPos_0x2a3918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA14u; }
    }
    if (ctx->pc != 0x2ABA14u) { return; }
    ctx->pc = 0x2ABA14u;
    // 0x2aba14: 0x8e050004
    ctx->pc = 0x2aba14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aba18: 0x24a40250
    ctx->pc = 0x2aba18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 592));
    // 0x2aba1c: 0xc0b9534
    ctx->pc = 0x2ABA1Cu;
    SET_GPR_U32(ctx, 31, 0x2ABA24u);
    ctx->pc = 0x2ABA20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 528));
    ctx->pc = 0x2E54D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InversMatrix_0x2e54d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA24u; }
    }
    if (ctx->pc != 0x2ABA24u) { return; }
    ctx->pc = 0x2ABA24u;
    // 0x2aba24: 0x8e020004
    ctx->pc = 0x2aba24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aba28: 0xa0400002
    ctx->pc = 0x2aba28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aba2c: 0xdfbf0010
    ctx->pc = 0x2aba2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aba30: 0xdfb00000
    ctx->pc = 0x2aba30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aba34: 0x3e00008
    ctx->pc = 0x2ABA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABA38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ABA3Cu;
}
