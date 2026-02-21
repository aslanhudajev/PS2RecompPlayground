#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBLoadTexturesWait
// Address: 0x2c7548 - 0x2c75dc
void MBLoadTexturesWait_0x2c7548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7548u;

    // 0x2c7548: 0x27bdffc0
    ctx->pc = 0x2c7548u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c754c: 0xffbf0030
    ctx->pc = 0x2c754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c7550: 0xffb20020
    ctx->pc = 0x2c7550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c7554: 0xffb10010
    ctx->pc = 0x2c7554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c7558: 0xffb00000
    ctx->pc = 0x2c7558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c755c: 0x80882d
    ctx->pc = 0x2c755cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7560: 0xa0902d
    ctx->pc = 0x2c7560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7564: 0x3c020036
    ctx->pc = 0x2c7564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c7568: 0x8c42dee0
    ctx->pc = 0x2c7568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c756c: 0x128100
    ctx->pc = 0x2c756cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 4));
    // 0x2c7570: 0x26100004
    ctx->pc = 0x2c7570u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c7574: 0x8c420038
    ctx->pc = 0x2c7574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2c7578: 0x2028021
    ctx->pc = 0x2c7578u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c757c: 0x8e020000
    ctx->pc = 0x2c757cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c7580: 0x3c05003b
    ctx->pc = 0x2c7580u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2c7584: 0x24a570d0
    ctx->pc = 0x2c7584u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28880));
    // 0x2c7588: 0x8e060008
    ctx->pc = 0x2c7588u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c758c: 0xc0b4e7c
    ctx->pc = 0x2C758Cu;
    SET_GPR_U32(ctx, 31, 0x2C7594u);
    ctx->pc = 0x2C7590u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    ctx->pc = 0x2D39F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadFile_0x2d39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7594u; }
    }
    if (ctx->pc != 0x2C7594u) { return; }
    ctx->pc = 0x2C7594u;
    // 0x2c7594: 0x2446000f
    ctx->pc = 0x2c7594u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 15));
    // 0x2c7598: 0x3c02ffff
    ctx->pc = 0x2c7598u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2c759c: 0x3442fff0
    ctx->pc = 0x2c759cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65520));
    // 0x2c75a0: 0xc23024
    ctx->pc = 0x2c75a0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c75a4: 0x8e070008
    ctx->pc = 0x2c75a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c75a8: 0xe6102b
    ctx->pc = 0x2c75a8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2c75ac: 0x10400004
    ctx->pc = 0x2C75ACu;
    {
        const bool branch_taken_0x2c75ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C75B0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2c75ac) {
            ctx->pc = 0x2C75C0u;
            goto label_2c75c0;
        }
    }
    ctx->pc = 0x2C75B4u;
    // 0x2c75b4: 0x24847118
    ctx->pc = 0x2c75b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28952));
    // 0x2c75b8: 0xc0b492e
    ctx->pc = 0x2C75B8u;
    SET_GPR_U32(ctx, 31, 0x2C75C0u);
    ctx->pc = 0x2C75BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75C0u; }
    }
    if (ctx->pc != 0x2C75C0u) { return; }
    ctx->pc = 0x2C75C0u;
label_2c75c0:
    // 0x2c75c0: 0x240202d
    ctx->pc = 0x2c75c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c75c4: 0xdfbf0030
    ctx->pc = 0x2c75c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c75c8: 0xdfb20020
    ctx->pc = 0x2c75c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c75cc: 0xdfb10010
    ctx->pc = 0x2c75ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c75d0: 0xdfb00000
    ctx->pc = 0x2c75d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c75d4: 0x80ab9b6
    ctx->pc = 0x2C75D4u;
    ctx->pc = 0x2C75D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2AE6D8u;
    pbSetupTexture_0x2ae6d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2C75DCu;
}
