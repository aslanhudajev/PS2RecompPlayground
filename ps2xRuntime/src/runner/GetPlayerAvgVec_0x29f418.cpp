#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetPlayerAvgVec
// Address: 0x29f418 - 0x29f51c
void GetPlayerAvgVec_0x29f418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29f418u;

    // 0x29f418: 0x27bdfff0
    ctx->pc = 0x29f418u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f41c: 0x44801000
    ctx->pc = 0x29f41cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x29f420: 0xe4820000
    ctx->pc = 0x29f420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29f424: 0xe4820004
    ctx->pc = 0x29f424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x29f428: 0xe4820008
    ctx->pc = 0x29f428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x29f42c: 0xe7a20000
    ctx->pc = 0x29f42cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29f430: 0xe7a20004
    ctx->pc = 0x29f430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29f434: 0xe7a20008
    ctx->pc = 0x29f434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29f438: 0x302d
    ctx->pc = 0x29f438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f43c: 0x24082b00
    ctx->pc = 0x29f43cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x29f440: 0x3c020032
    ctx->pc = 0x29f440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29f444: 0x24491bc0
    ctx->pc = 0x29f444u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29f448: 0x24070001
    ctx->pc = 0x29f448u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f44c: 0x3c013f80
    ctx->pc = 0x29f44cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29f450: 0x44811800
    ctx->pc = 0x29f450u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x29f454: 0xc81018
    ctx->pc = 0x29f454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29f458:
    // 0x29f458: 0x491821
    ctx->pc = 0x29f458u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x29f45c: 0x8c6200fc
    ctx->pc = 0x29f45cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x29f460: 0x54470028
    ctx->pc = 0x29F460u;
    {
        const bool branch_taken_0x29f460 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        if (branch_taken_0x29f460) {
            ctx->pc = 0x29F464u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x29F504u;
            goto label_29f504;
        }
    }
    ctx->pc = 0x29F468u;
    // 0x29f468: 0x9462093c
    ctx->pc = 0x29f468u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2364)));
    // 0x29f46c: 0x30420020
    ctx->pc = 0x29f46cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x29f470: 0x5040000b
    ctx->pc = 0x29F470u;
    {
        const bool branch_taken_0x29f470 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29f470) {
            ctx->pc = 0x29F474u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x29F4A0u;
            goto label_29f4a0;
        }
    }
    ctx->pc = 0x29F478u;
    // 0x29f478: 0xc46000f0
    ctx->pc = 0x29f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f47c: 0xc4a10000
    ctx->pc = 0x29f47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f480: 0x46010001
    ctx->pc = 0x29f480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29f484: 0xe7a00000
    ctx->pc = 0x29f484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29f488: 0xc46000f4
    ctx->pc = 0x29f488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f48c: 0xc4a10004
    ctx->pc = 0x29f48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f490: 0x46010001
    ctx->pc = 0x29f490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29f494: 0xe7a00004
    ctx->pc = 0x29f494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29f498: 0x10000009
    ctx->pc = 0x29F498u;
    {
        const bool branch_taken_0x29f498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F49Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29f498) {
            ctx->pc = 0x29F4C0u;
            goto label_29f4c0;
        }
    }
    ctx->pc = 0x29F4A0u;
label_29f4a0:
    // 0x29f4a0: 0xc4a10000
    ctx->pc = 0x29f4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f4a4: 0x46010001
    ctx->pc = 0x29f4a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29f4a8: 0xe7a00000
    ctx->pc = 0x29f4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29f4ac: 0xc4600054
    ctx->pc = 0x29f4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f4b0: 0xc4a10004
    ctx->pc = 0x29f4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f4b4: 0x46010001
    ctx->pc = 0x29f4b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29f4b8: 0xe7a00004
    ctx->pc = 0x29f4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29f4bc: 0xc4600058
    ctx->pc = 0x29f4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29f4c0:
    // 0x29f4c0: 0xc4a10008
    ctx->pc = 0x29f4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f4c4: 0x46010001
    ctx->pc = 0x29f4c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29f4c8: 0xe7a00008
    ctx->pc = 0x29f4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29f4cc: 0xc7a00000
    ctx->pc = 0x29f4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f4d0: 0xc4810000
    ctx->pc = 0x29f4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f4d4: 0x46010000
    ctx->pc = 0x29f4d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29f4d8: 0xe4800000
    ctx->pc = 0x29f4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29f4dc: 0xc7a00004
    ctx->pc = 0x29f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f4e0: 0xc4810004
    ctx->pc = 0x29f4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f4e4: 0x46010000
    ctx->pc = 0x29f4e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29f4e8: 0xe4800004
    ctx->pc = 0x29f4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x29f4ec: 0xc7a00008
    ctx->pc = 0x29f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f4f0: 0xc4810008
    ctx->pc = 0x29f4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f4f4: 0x46010000
    ctx->pc = 0x29f4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29f4f8: 0xe4800008
    ctx->pc = 0x29f4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x29f4fc: 0x46031080
    ctx->pc = 0x29f4fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x29f500: 0x24c60001
    ctx->pc = 0x29f500u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_29f504:
    // 0x29f504: 0x28c20004
    ctx->pc = 0x29f504u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
    // 0x29f508: 0x5440ffd3
    ctx->pc = 0x29F508u;
    {
        const bool branch_taken_0x29f508 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29f508) {
            ctx->pc = 0x29F50Cu;
            { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x29F458u;
            goto label_29f458;
        }
    }
    ctx->pc = 0x29F510u;
    // 0x29f510: 0x46001006
    ctx->pc = 0x29f510u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x29f514: 0x3e00008
    ctx->pc = 0x29F514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F518u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29F458u: goto label_29f458;
            case 0x29F4A0u: goto label_29f4a0;
            case 0x29F4C0u: goto label_29f4c0;
            case 0x29F504u: goto label_29f504;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29F51Cu;
}
