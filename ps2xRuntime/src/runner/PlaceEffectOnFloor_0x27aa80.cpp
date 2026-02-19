#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlaceEffectOnFloor
// Address: 0x27aa80 - 0x27ab40
void PlaceEffectOnFloor_0x27aa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27aa80u;

    // 0x27aa80: 0x27bdffe0
    ctx->pc = 0x27aa80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27aa84: 0xffbf0010
    ctx->pc = 0x27aa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27aa88: 0xffb00000
    ctx->pc = 0x27aa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27aa8c: 0xa0802d
    ctx->pc = 0x27aa8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa90: 0x240200f0
    ctx->pc = 0x27aa90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27aa94: 0x822018
    ctx->pc = 0x27aa94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27aa98: 0x3c020034
    ctx->pc = 0x27aa98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27aa9c: 0x24420eb0
    ctx->pc = 0x27aa9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27aaa0: 0x16000002
    ctx->pc = 0x27AAA0u;
    {
        const bool branch_taken_0x27aaa0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x27AAA4u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x27aaa0) {
            ctx->pc = 0x27AAACu;
            goto label_27aaac;
        }
    }
    ctx->pc = 0x27AAA8u;
    // 0x27aaa8: 0x8c900014
    ctx->pc = 0x27aaa8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_27aaac:
    // 0x27aaac: 0xc48d0098
    ctx->pc = 0x27aaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27aab0: 0x3c013f80
    ctx->pc = 0x27aab0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27aab4: 0x44816000
    ctx->pc = 0x27aab4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27aab8: 0x3c0140a0
    ctx->pc = 0x27aab8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x27aabc: 0x44810000
    ctx->pc = 0x27aabcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27aac0: 0x26040030
    ctx->pc = 0x27aac0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 48));
    // 0x27aac4: 0x282d
    ctx->pc = 0x27aac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aac8: 0x460c6b00
    ctx->pc = 0x27aac8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x27aacc: 0x46006b40
    ctx->pc = 0x27aaccu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x27aad0: 0x3c01c120
    ctx->pc = 0x27aad0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49440 << 16));
    // 0x27aad4: 0x44817000
    ctx->pc = 0x27aad4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x27aad8: 0x24060001
    ctx->pc = 0x27aad8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aadc: 0xc087b24
    ctx->pc = 0x27AADCu;
    SET_GPR_U32(ctx, 31, 0x27AAE4u);
    ctx->pc = 0x27AAE0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AAE4u; }
    }
    if (ctx->pc != 0x27AAE4u) { return; }
    ctx->pc = 0x27AAE4u;
    // 0x27aae4: 0x1040000b
    ctx->pc = 0x27AAE4u;
    {
        const bool branch_taken_0x27aae4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27AAE8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x27aae4) {
            ctx->pc = 0x27AB14u;
            goto label_27ab14;
        }
    }
    ctx->pc = 0x27AAECu;
    // 0x27aaec: 0x2484fbb0
    ctx->pc = 0x27aaecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966192));
    // 0x27aaf0: 0xc0b5494
    ctx->pc = 0x27AAF0u;
    SET_GPR_U32(ctx, 31, 0x27AAF8u);
    ctx->pc = 0x27AAF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AAF8u; }
    }
    if (ctx->pc != 0x27AAF8u) { return; }
    ctx->pc = 0x27AAF8u;
    // 0x27aaf8: 0xc6000034
    ctx->pc = 0x27aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aafc: 0x3c013dcc
    ctx->pc = 0x27aafcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x27ab00: 0x3421cccd
    ctx->pc = 0x27ab00u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27ab04: 0x44810800
    ctx->pc = 0x27ab04u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27ab08: 0x46010000
    ctx->pc = 0x27ab08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27ab0c: 0x10000008
    ctx->pc = 0x27AB0Cu;
    {
        const bool branch_taken_0x27ab0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27AB10u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        if (branch_taken_0x27ab0c) {
            ctx->pc = 0x27AB30u;
            goto label_27ab30;
        }
    }
    ctx->pc = 0x27AB14u;
label_27ab14:
    // 0x27ab14: 0x3c04003a
    ctx->pc = 0x27ab14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x27ab18: 0x24842550
    ctx->pc = 0x27ab18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x27ab1c: 0x200282d
    ctx->pc = 0x27ab1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab20: 0xdfbf0010
    ctx->pc = 0x27ab20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ab24: 0xdfb00000
    ctx->pc = 0x27ab24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ab28: 0x80b549e
    ctx->pc = 0x27AB28u;
    ctx->pc = 0x27AB2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D5278u;
    CopyMat3_0x2d5278(rdram, ctx, runtime); return;
    ctx->pc = 0x27AB30u;
label_27ab30:
    // 0x27ab30: 0xdfbf0010
    ctx->pc = 0x27ab30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ab34: 0xdfb00000
    ctx->pc = 0x27ab34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ab38: 0x3e00008
    ctx->pc = 0x27AB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AB3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27AAACu: goto label_27aaac;
            case 0x27AB14u: goto label_27ab14;
            case 0x27AB30u: goto label_27ab30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27AB40u;
}
