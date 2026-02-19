#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScaleFX
// Address: 0x27d8f8 - 0x27d978
void ScaleFX_0x27d8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27d8f8u;

    // 0x27d8f8: 0x27bdffc0
    ctx->pc = 0x27d8f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27d8fc: 0xffbf0010
    ctx->pc = 0x27d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d900: 0xffb00000
    ctx->pc = 0x27d900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d904: 0xe7b60030
    ctx->pc = 0x27d904u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27d908: 0xe7b50028
    ctx->pc = 0x27d908u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27d90c: 0xe7b40020
    ctx->pc = 0x27d90cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27d910: 0x46006506
    ctx->pc = 0x27d910u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27d914: 0x46006d46
    ctx->pc = 0x27d914u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x27d918: 0x240200f0
    ctx->pc = 0x27d918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27d91c: 0x822018
    ctx->pc = 0x27d91cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27d920: 0x3c020034
    ctx->pc = 0x27d920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27d924: 0x24420eb0
    ctx->pc = 0x27d924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27d928: 0x828021
    ctx->pc = 0x27d928u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27d92c: 0x8e040014
    ctx->pc = 0x27d92cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27d930: 0x1080000a
    ctx->pc = 0x27D930u;
    {
        const bool branch_taken_0x27d930 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D934u;
        ctx->f[22] = FPU_MOV_S(ctx->f[14]);
        if (branch_taken_0x27d930) {
            ctx->pc = 0x27D95Cu;
            goto label_27d95c;
        }
    }
    ctx->pc = 0x27D938u;
    // 0x27d938: 0x24050008
    ctx->pc = 0x27d938u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x27d93c: 0xc0b41b8
    ctx->pc = 0x27D93Cu;
    SET_GPR_U32(ctx, 31, 0x27D944u);
    ctx->pc = 0x27D940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D944u; }
    }
    if (ctx->pc != 0x27D944u) { return; }
    ctx->pc = 0x27D944u;
    // 0x27d944: 0x8e020014
    ctx->pc = 0x27d944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27d948: 0xe4540040
    ctx->pc = 0x27d948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x27d94c: 0x8e020014
    ctx->pc = 0x27d94cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27d950: 0xe4550044
    ctx->pc = 0x27d950u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x27d954: 0x8e020014
    ctx->pc = 0x27d954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27d958: 0xe4560048
    ctx->pc = 0x27d958u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_27d95c:
    // 0x27d95c: 0xdfbf0010
    ctx->pc = 0x27d95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d960: 0xdfb00000
    ctx->pc = 0x27d960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d964: 0xc7b60030
    ctx->pc = 0x27d964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27d968: 0xc7b50028
    ctx->pc = 0x27d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27d96c: 0xc7b40020
    ctx->pc = 0x27d96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27d970: 0x3e00008
    ctx->pc = 0x27D970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D974u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D95Cu: goto label_27d95c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D978u;
}
