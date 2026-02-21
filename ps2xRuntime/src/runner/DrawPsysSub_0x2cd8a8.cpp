#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawPsysSub
// Address: 0x2cd8a8 - 0x2cdd74
void DrawPsysSub_0x2cd8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cd8a8u;

    // 0x2cd8a8: 0x27bdff00
    ctx->pc = 0x2cd8a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2cd8ac: 0xffbf00c0
    ctx->pc = 0x2cd8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2cd8b0: 0xffbe00b0
    ctx->pc = 0x2cd8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2cd8b4: 0xffb700a0
    ctx->pc = 0x2cd8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2cd8b8: 0xffb60090
    ctx->pc = 0x2cd8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2cd8bc: 0xffb50080
    ctx->pc = 0x2cd8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2cd8c0: 0xffb40070
    ctx->pc = 0x2cd8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2cd8c4: 0xffb30060
    ctx->pc = 0x2cd8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2cd8c8: 0xffb20050
    ctx->pc = 0x2cd8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2cd8cc: 0xffb10040
    ctx->pc = 0x2cd8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2cd8d0: 0xffb00030
    ctx->pc = 0x2cd8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2cd8d4: 0xe7b800f0
    ctx->pc = 0x2cd8d4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2cd8d8: 0xe7b700e8
    ctx->pc = 0x2cd8d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2cd8dc: 0xe7b600e0
    ctx->pc = 0x2cd8dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2cd8e0: 0xe7b500d8
    ctx->pc = 0x2cd8e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2cd8e4: 0xe7b400d0
    ctx->pc = 0x2cd8e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2cd8e8: 0x80882d
    ctx->pc = 0x2cd8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd8ec: 0x46006546
    ctx->pc = 0x2cd8ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2cd8f0: 0xafa70010
    ctx->pc = 0x2cd8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x2cd8f4: 0xafa80014
    ctx->pc = 0x2cd8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x2cd8f8: 0x3c020036
    ctx->pc = 0x2cd8f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2cd8fc: 0x8c42dee0
    ctx->pc = 0x2cd8fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2cd900: 0xafa20018
    ctx->pc = 0x2cd900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2cd904: 0x3c02003a
    ctx->pc = 0x2cd904u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cd908: 0x8c521bd0
    ctx->pc = 0x2cd908u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2cd90c: 0x3c03003a
    ctx->pc = 0x2cd90cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2cd910: 0x8c62aa30
    ctx->pc = 0x2cd910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294945328)));
    // 0x2cd914: 0x28420801
    ctx->pc = 0x2cd914u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2049));
    // 0x2cd918: 0x10400105
    ctx->pc = 0x2CD918u;
    {
        const bool branch_taken_0x2cd918 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CD91Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 112));
        if (branch_taken_0x2cd918) {
            ctx->pc = 0x2CDD30u;
            goto label_2cdd30;
        }
    }
    ctx->pc = 0x2CD920u;
    // 0x2cd920: 0x5b402
    ctx->pc = 0x2cd920u;
    SET_GPR_U32(ctx, 22, SRL32(GPR_U32(ctx, 5), 16));
    // 0x2cd924: 0x32d600ff
    ctx->pc = 0x2cd924u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 22), 255));
    // 0x2cd928: 0x5ba02
    ctx->pc = 0x2cd928u;
    SET_GPR_U32(ctx, 23, SRL32(GPR_U32(ctx, 5), 8));
    // 0x2cd92c: 0x32f700ff
    ctx->pc = 0x2cd92cu;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 23), 255));
    // 0x2cd930: 0x30a700ff
    ctx->pc = 0x2cd930u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 5), 255));
    // 0x2cd934: 0xafa70020
    ctx->pc = 0x2cd934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x2cd938: 0x52e42
    ctx->pc = 0x2cd938u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 25));
    // 0x2cd93c: 0xafa5001c
    ctx->pc = 0x2cd93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x2cd940: 0x3c013f00
    ctx->pc = 0x2cd940u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2cd944: 0x4481c000
    ctx->pc = 0x2cd944u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 1);
    // 0x2cd948: 0x4618ad42
    ctx->pc = 0x2cd948u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x2cd94c: 0x4600a847
    ctx->pc = 0x2cd94cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x2cd950: 0xc6440070
    ctx->pc = 0x2cd950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cd954: 0x46040902
    ctx->pc = 0x2cd954u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2cd958: 0xc6200000
    ctx->pc = 0x2cd958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd95c: 0x46002100
    ctx->pc = 0x2cd95cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cd960: 0xe7a40000
    ctx->pc = 0x2cd960u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cd964: 0xc6030004
    ctx->pc = 0x2cd964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cd968: 0x460308c2
    ctx->pc = 0x2cd968u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2cd96c: 0xc6200004
    ctx->pc = 0x2cd96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd970: 0x460018c0
    ctx->pc = 0x2cd970u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2cd974: 0xe7a30004
    ctx->pc = 0x2cd974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cd978: 0xc6020008
    ctx->pc = 0x2cd978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd97c: 0x46020882
    ctx->pc = 0x2cd97cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cd980: 0xc6200008
    ctx->pc = 0x2cd980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd984: 0x46001080
    ctx->pc = 0x2cd984u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2cd988: 0xe7a20008
    ctx->pc = 0x2cd988u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cd98c: 0xc6000010
    ctx->pc = 0x2cd98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd990: 0x46000802
    ctx->pc = 0x2cd990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cd994: 0x46040000
    ctx->pc = 0x2cd994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2cd998: 0xe7a00000
    ctx->pc = 0x2cd998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cd99c: 0xc6000014
    ctx->pc = 0x2cd99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd9a0: 0x46000802
    ctx->pc = 0x2cd9a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cd9a4: 0x46030000
    ctx->pc = 0x2cd9a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2cd9a8: 0xe7a00004
    ctx->pc = 0x2cd9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cd9ac: 0xc6000018
    ctx->pc = 0x2cd9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd9b0: 0x46000842
    ctx->pc = 0x2cd9b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cd9b4: 0x46020840
    ctx->pc = 0x2cd9b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2cd9b8: 0xe7a10008
    ctx->pc = 0x2cd9b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cd9bc: 0x3c013f80
    ctx->pc = 0x2cd9bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2cd9c0: 0x4481b000
    ctx->pc = 0x2cd9c0u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x2cd9c4: 0xe7b6000c
    ctx->pc = 0x2cd9c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2cd9c8: 0x8fa20018
    ctx->pc = 0x2cd9c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cd9cc: 0x8c460004
    ctx->pc = 0x2cd9ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd9d0: 0x3a0202d
    ctx->pc = 0x2cd9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9d4: 0x3a0282d
    ctx->pc = 0x2cd9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9d8: 0xc0b5850
    ctx->pc = 0x2CD9D8u;
    SET_GPR_U32(ctx, 31, 0x2CD9E0u);
    ctx->pc = 0x2CD9DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
    ctx->pc = 0x2D6140u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVec4Mat4_0x2d6140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD9E0u; }
    }
    if (ctx->pc != 0x2CD9E0u) { return; }
    ctx->pc = 0x2CD9E0u;
    // 0x2cd9e0: 0xc7a0000c
    ctx->pc = 0x2cd9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd9e4: 0x46160036
    ctx->pc = 0x2cd9e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd9e8: 0x0
    ctx->pc = 0x2cd9e8u;
    // NOP
    // 0x2cd9ec: 0x450100d1
    ctx->pc = 0x2CD9ECu;
    {
        const bool branch_taken_0x2cd9ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD9F0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x2cd9ec) {
            ctx->pc = 0x2CDD34u;
            goto label_2cdd34;
        }
    }
    ctx->pc = 0x2CD9F4u;
    // 0x2cd9f4: 0x0
    ctx->pc = 0x2cd9f4u;
    // NOP
    // 0x2cd9f8: 0x0
    ctx->pc = 0x2cd9f8u;
    // NOP
    // 0x2cd9fc: 0x4600b503
    ctx->pc = 0x2cd9fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[20] = ctx->f[22] / ctx->f[0];
    // 0x2cda00: 0xc7a00008
    ctx->pc = 0x2cda00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cda04: 0x4600a002
    ctx->pc = 0x2cda04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cda08: 0x46000064
    ctx->pc = 0x2cda08u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2cda0c: 0x44150800
    ctx->pc = 0x2cda0cu;
    SET_GPR_U32(ctx, 21, *(uint32_t*)&ctx->f[1]);
    // 0x2cda10: 0x44950000
    ctx->pc = 0x2cda10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 21);
    // 0x2cda14: 0x46800020
    ctx->pc = 0x2cda14u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cda18: 0x46160036
    ctx->pc = 0x2cda18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cda1c: 0x0
    ctx->pc = 0x2cda1cu;
    // NOP
    // 0x2cda20: 0x450100c5
    ctx->pc = 0x2CDA20u;
    {
        const bool branch_taken_0x2cda20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CDA24u;
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x2cda20) {
            ctx->pc = 0x2CDD38u;
            goto label_2cdd38;
        }
    }
    ctx->pc = 0x2CDA28u;
    // 0x2cda28: 0x3c014180
    ctx->pc = 0x2cda28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2cda2c: 0x4481b800
    ctx->pc = 0x2cda2cu;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
    // 0x2cda30: 0x4617a502
    ctx->pc = 0x2cda30u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x2cda34: 0xc7a00000
    ctx->pc = 0x2cda34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cda38: 0x4600a002
    ctx->pc = 0x2cda38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cda3c: 0x46000064
    ctx->pc = 0x2cda3cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2cda40: 0x44140800
    ctx->pc = 0x2cda40u;
    SET_GPR_U32(ctx, 20, *(uint32_t*)&ctx->f[1]);
    // 0x2cda44: 0xc7a00004
    ctx->pc = 0x2cda44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cda48: 0x4600a002
    ctx->pc = 0x2cda48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cda4c: 0x46000064
    ctx->pc = 0x2cda4cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2cda50: 0x44130800
    ctx->pc = 0x2cda50u;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[1]);
    // 0x2cda54: 0x3c03003d
    ctx->pc = 0x2cda54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2cda58: 0x8c622230
    ctx->pc = 0x2cda58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8752)));
    // 0x2cda5c: 0x282102a
    ctx->pc = 0x2cda5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x2cda60: 0x144000b5
    ctx->pc = 0x2CDA60u;
    {
        const bool branch_taken_0x2cda60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cda60) {
            ctx->pc = 0x2CDD38u;
            goto label_2cdd38;
        }
    }
    ctx->pc = 0x2CDA68u;
    // 0x2cda68: 0x3c07003d
    ctx->pc = 0x2cda68u;
    SET_GPR_U32(ctx, 7, ((uint32_t)61 << 16));
    // 0x2cda6c: 0x8ce22238
    ctx->pc = 0x2cda6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 8760)));
    // 0x2cda70: 0x262102a
    ctx->pc = 0x2cda70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x2cda74: 0x544000b1
    ctx->pc = 0x2CDA74u;
    {
        const bool branch_taken_0x2cda74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cda74) {
            ctx->pc = 0x2CDA78u;
            SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->pc = 0x2CDD3Cu;
            goto label_2cdd3c;
        }
    }
    ctx->pc = 0x2CDA7Cu;
    // 0x2cda7c: 0x3c03003d
    ctx->pc = 0x2cda7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2cda80: 0x8c622234
    ctx->pc = 0x2cda80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8756)));
    // 0x2cda84: 0x282102a
    ctx->pc = 0x2cda84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x2cda88: 0x104000aa
    ctx->pc = 0x2CDA88u;
    {
        const bool branch_taken_0x2cda88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDA8Cu;
        SET_GPR_U32(ctx, 30, ((uint32_t)61 << 16));
        if (branch_taken_0x2cda88) {
            ctx->pc = 0x2CDD34u;
            goto label_2cdd34;
        }
    }
    ctx->pc = 0x2CDA90u;
    // 0x2cda90: 0x8fc2223c
    ctx->pc = 0x2cda90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8764)));
    // 0x2cda94: 0x262102a
    ctx->pc = 0x2cda94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x2cda98: 0x104000a6
    ctx->pc = 0x2CDA98u;
    {
        const bool branch_taken_0x2cda98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDA9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cda98) {
            ctx->pc = 0x2CDD34u;
            goto label_2cdd34;
        }
    }
    ctx->pc = 0x2CDAA0u;
    // 0x2cdaa0: 0xc6430070
    ctx->pc = 0x2cdaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2cdaa4: 0x4603a8c2
    ctx->pc = 0x2cdaa4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x2cdaa8: 0xc6200000
    ctx->pc = 0x2cdaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdaac: 0x460018c0
    ctx->pc = 0x2cdaacu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2cdab0: 0xe7a30000
    ctx->pc = 0x2cdab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cdab4: 0xc6020004
    ctx->pc = 0x2cdab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cdab8: 0x4602a882
    ctx->pc = 0x2cdab8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2cdabc: 0xc6200004
    ctx->pc = 0x2cdabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdac0: 0x46001080
    ctx->pc = 0x2cdac0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2cdac4: 0xe7a20004
    ctx->pc = 0x2cdac4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cdac8: 0xc6010008
    ctx->pc = 0x2cdac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdacc: 0x4601a842
    ctx->pc = 0x2cdaccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2cdad0: 0xc6200008
    ctx->pc = 0x2cdad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdad4: 0x46000840
    ctx->pc = 0x2cdad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cdad8: 0xe7a10008
    ctx->pc = 0x2cdad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cdadc: 0xc6000010
    ctx->pc = 0x2cdadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdae0: 0x4600a802
    ctx->pc = 0x2cdae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2cdae4: 0x46030000
    ctx->pc = 0x2cdae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2cdae8: 0xe7a00000
    ctx->pc = 0x2cdae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cdaec: 0xc6000014
    ctx->pc = 0x2cdaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdaf0: 0x4600a802
    ctx->pc = 0x2cdaf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2cdaf4: 0x46020000
    ctx->pc = 0x2cdaf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cdaf8: 0xe7a00004
    ctx->pc = 0x2cdaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cdafc: 0xc6000018
    ctx->pc = 0x2cdafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdb00: 0x4600a802
    ctx->pc = 0x2cdb00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2cdb04: 0x46010000
    ctx->pc = 0x2cdb04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cdb08: 0xe7a00008
    ctx->pc = 0x2cdb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cdb0c: 0xe7b6000c
    ctx->pc = 0x2cdb0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2cdb10: 0x8fa70018
    ctx->pc = 0x2cdb10u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdb14: 0x8ce60004
    ctx->pc = 0x2cdb14u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2cdb18: 0x3a0282d
    ctx->pc = 0x2cdb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb1c: 0xc0b5850
    ctx->pc = 0x2CDB1Cu;
    SET_GPR_U32(ctx, 31, 0x2CDB24u);
    ctx->pc = 0x2CDB20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
    ctx->pc = 0x2D6140u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVec4Mat4_0x2d6140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDB24u; }
    }
    if (ctx->pc != 0x2CDB24u) { return; }
    ctx->pc = 0x2CDB24u;
    // 0x2cdb24: 0xc7a00000
    ctx->pc = 0x2cdb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdb28: 0x4600a002
    ctx->pc = 0x2cdb28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cdb2c: 0x46000064
    ctx->pc = 0x2cdb2cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2cdb30: 0x440a0800
    ctx->pc = 0x2cdb30u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[1]);
    // 0x2cdb34: 0xc7a00004
    ctx->pc = 0x2cdb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdb38: 0x4600a002
    ctx->pc = 0x2cdb38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cdb3c: 0x46000064
    ctx->pc = 0x2cdb3cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2cdb40: 0x44090800
    ctx->pc = 0x2cdb40u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[1]);
    // 0x2cdb44: 0x3c03003d
    ctx->pc = 0x2cdb44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2cdb48: 0x8c622230
    ctx->pc = 0x2cdb48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8752)));
    // 0x2cdb4c: 0x142102a
    ctx->pc = 0x2cdb4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 2)));
    // 0x2cdb50: 0x14400078
    ctx->pc = 0x2CDB50u;
    {
        const bool branch_taken_0x2cdb50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CDB54u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x2cdb50) {
            ctx->pc = 0x2CDD34u;
            goto label_2cdd34;
        }
    }
    ctx->pc = 0x2CDB58u;
    // 0x2cdb58: 0x3c07003d
    ctx->pc = 0x2cdb58u;
    SET_GPR_U32(ctx, 7, ((uint32_t)61 << 16));
    // 0x2cdb5c: 0x8ce22238
    ctx->pc = 0x2cdb5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 8760)));
    // 0x2cdb60: 0x122102a
    ctx->pc = 0x2cdb60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 2)));
    // 0x2cdb64: 0x54400074
    ctx->pc = 0x2CDB64u;
    {
        const bool branch_taken_0x2cdb64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cdb64) {
            ctx->pc = 0x2CDB68u;
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->pc = 0x2CDD38u;
            goto label_2cdd38;
        }
    }
    ctx->pc = 0x2CDB6Cu;
    // 0x2cdb6c: 0x3c03003d
    ctx->pc = 0x2cdb6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2cdb70: 0x8c622234
    ctx->pc = 0x2cdb70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8756)));
    // 0x2cdb74: 0x142102a
    ctx->pc = 0x2cdb74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 2)));
    // 0x2cdb78: 0x1040006e
    ctx->pc = 0x2CDB78u;
    {
        const bool branch_taken_0x2cdb78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDB7Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8764)));
        if (branch_taken_0x2cdb78) {
            ctx->pc = 0x2CDD34u;
            goto label_2cdd34;
        }
    }
    ctx->pc = 0x2CDB80u;
    // 0x2cdb80: 0x122102a
    ctx->pc = 0x2cdb80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 2)));
    // 0x2cdb84: 0x1040006b
    ctx->pc = 0x2CDB84u;
    {
        const bool branch_taken_0x2cdb84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDB88u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
        if (branch_taken_0x2cdb84) {
            ctx->pc = 0x2CDD34u;
            goto label_2cdd34;
        }
    }
    ctx->pc = 0x2CDB8Cu;
    // 0x2cdb8c: 0x22023
    ctx->pc = 0x2cdb8cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2cdb90: 0x2405ffff
    ctx->pc = 0x2cdb90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cdb94: 0xa2182a
    ctx->pc = 0x2cdb94u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x2cdb98: 0x83100a
    ctx->pc = 0x2cdb98u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x2cdb9c: 0x28420010
    ctx->pc = 0x2cdb9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
    // 0x2cdba0: 0x14400065
    ctx->pc = 0x2CDBA0u;
    {
        const bool branch_taken_0x2cdba0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CDBA4u;
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x2cdba0) {
            ctx->pc = 0x2CDD38u;
            goto label_2cdd38;
        }
    }
    ctx->pc = 0x2CDBA8u;
    // 0x2cdba8: 0x1331023
    ctx->pc = 0x2cdba8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x2cdbac: 0x22023
    ctx->pc = 0x2cdbacu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2cdbb0: 0xa2182a
    ctx->pc = 0x2cdbb0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x2cdbb4: 0x83100a
    ctx->pc = 0x2cdbb4u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x2cdbb8: 0x28420010
    ctx->pc = 0x2cdbb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
    // 0x2cdbbc: 0x5440005f
    ctx->pc = 0x2CDBBCu;
    {
        const bool branch_taken_0x2cdbbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cdbbc) {
            ctx->pc = 0x2CDBC0u;
            SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->pc = 0x2CDD3Cu;
            goto label_2cdd3c;
        }
    }
    ctx->pc = 0x2CDBC4u;
    // 0x2cdbc4: 0xc7a00010
    ctx->pc = 0x2cdbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdbc8: 0x46800020
    ctx->pc = 0x2cdbc8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cdbcc: 0x46170002
    ctx->pc = 0x2cdbccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2cdbd0: 0x46180000
    ctx->pc = 0x2cdbd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x2cdbd4: 0x46000064
    ctx->pc = 0x2cdbd4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2cdbd8: 0x44050800
    ctx->pc = 0x2cdbd8u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x2cdbdc: 0x52c00
    ctx->pc = 0x2cdbdcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x2cdbe0: 0x52c03
    ctx->pc = 0x2cdbe0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2cdbe4: 0xc7a00014
    ctx->pc = 0x2cdbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdbe8: 0x46800020
    ctx->pc = 0x2cdbe8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cdbec: 0x46170002
    ctx->pc = 0x2cdbecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2cdbf0: 0x46180000
    ctx->pc = 0x2cdbf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x2cdbf4: 0x46000064
    ctx->pc = 0x2cdbf4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2cdbf8: 0x44040800
    ctx->pc = 0x2cdbf8u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
    // 0x2cdbfc: 0x42400
    ctx->pc = 0x2cdbfcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x2cdc00: 0x42403
    ctx->pc = 0x2cdc00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2cdc04: 0x3c060037
    ctx->pc = 0x2cdc04u;
    SET_GPR_U32(ctx, 6, ((uint32_t)55 << 16));
    // 0x2cdc08: 0x8cc22970
    ctx->pc = 0x2cdc08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 10608)));
    // 0x2cdc0c: 0x3c031000
    ctx->pc = 0x2cdc0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2cdc10: 0x34630006
    ctx->pc = 0x2cdc10u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 6));
    // 0x2cdc14: 0xac430000
    ctx->pc = 0x2cdc14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cdc18: 0x24420004
    ctx->pc = 0x2cdc18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdc1c: 0xac400000
    ctx->pc = 0x2cdc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cdc20: 0x24420004
    ctx->pc = 0x2cdc20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdc24: 0x3c031000
    ctx->pc = 0x2cdc24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2cdc28: 0xac430000
    ctx->pc = 0x2cdc28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cdc2c: 0x24420004
    ctx->pc = 0x2cdc2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdc30: 0x3c035000
    ctx->pc = 0x2cdc30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20480 << 16));
    // 0x2cdc34: 0x34630006
    ctx->pc = 0x2cdc34u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 6));
    // 0x2cdc38: 0xac430000
    ctx->pc = 0x2cdc38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cdc3c: 0x24420004
    ctx->pc = 0x2cdc3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdc40: 0x34038001
    ctx->pc = 0x2cdc40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32769));
    // 0x2cdc44: 0xac430000
    ctx->pc = 0x2cdc44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cdc48: 0x24420004
    ctx->pc = 0x2cdc48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdc4c: 0x3c0350ab
    ctx->pc = 0x2cdc4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)20651 << 16));
    // 0x2cdc50: 0x34634000
    ctx->pc = 0x2cdc50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16384));
    // 0x2cdc54: 0xac430000
    ctx->pc = 0x2cdc54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cdc58: 0x24420004
    ctx->pc = 0x2cdc58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdc5c: 0x3c030005
    ctx->pc = 0x2cdc5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)5 << 16));
    // 0x2cdc60: 0x34633513
    ctx->pc = 0x2cdc60u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 13587));
    // 0x2cdc64: 0xac430000
    ctx->pc = 0x2cdc64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cdc68: 0x24420004
    ctx->pc = 0x2cdc68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdc6c: 0xac400000
    ctx->pc = 0x2cdc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cdc70: 0x24420004
    ctx->pc = 0x2cdc70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdc74: 0x3c07003a
    ctx->pc = 0x2cdc74u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2cdc78: 0x8ce3aa30
    ctx->pc = 0x2cdc78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4294945328)));
    // 0x2cdc7c: 0x24630001
    ctx->pc = 0x2cdc7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cdc80: 0xace3aa30
    ctx->pc = 0x2cdc80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294945328), GPR_U32(ctx, 3));
    // 0x2cdc84: 0xac400000
    ctx->pc = 0x2cdc84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cdc88: 0x24420004
    ctx->pc = 0x2cdc88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdc8c: 0xac400000
    ctx->pc = 0x2cdc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cdc90: 0x24420004
    ctx->pc = 0x2cdc90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdc94: 0xac400000
    ctx->pc = 0x2cdc94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cdc98: 0x24420004
    ctx->pc = 0x2cdc98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdc9c: 0xac400000
    ctx->pc = 0x2cdc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cdca0: 0x24420004
    ctx->pc = 0x2cdca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdca4: 0xac560000
    ctx->pc = 0x2cdca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x2cdca8: 0x24420004
    ctx->pc = 0x2cdca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdcac: 0xac570000
    ctx->pc = 0x2cdcacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x2cdcb0: 0x24420004
    ctx->pc = 0x2cdcb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdcb4: 0x8fa30020
    ctx->pc = 0x2cdcb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cdcb8: 0xac430000
    ctx->pc = 0x2cdcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cdcbc: 0x24420004
    ctx->pc = 0x2cdcbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdcc0: 0x8fa7001c
    ctx->pc = 0x2cdcc0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2cdcc4: 0xac470000
    ctx->pc = 0x2cdcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x2cdcc8: 0x24420004
    ctx->pc = 0x2cdcc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdccc: 0xac540000
    ctx->pc = 0x2cdcccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x2cdcd0: 0x24420004
    ctx->pc = 0x2cdcd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdcd4: 0xac530000
    ctx->pc = 0x2cdcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x2cdcd8: 0x24420004
    ctx->pc = 0x2cdcd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdcdc: 0xac550000
    ctx->pc = 0x2cdcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x2cdce0: 0x24420004
    ctx->pc = 0x2cdce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdce4: 0xac400000
    ctx->pc = 0x2cdce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cdce8: 0x24420004
    ctx->pc = 0x2cdce8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdcec: 0xac450000
    ctx->pc = 0x2cdcecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2cdcf0: 0x24420004
    ctx->pc = 0x2cdcf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdcf4: 0xac440000
    ctx->pc = 0x2cdcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2cdcf8: 0x24420004
    ctx->pc = 0x2cdcf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdcfc: 0xac400000
    ctx->pc = 0x2cdcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cdd00: 0x24420004
    ctx->pc = 0x2cdd00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdd04: 0xac400000
    ctx->pc = 0x2cdd04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cdd08: 0x24420004
    ctx->pc = 0x2cdd08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdd0c: 0xac4a0000
    ctx->pc = 0x2cdd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x2cdd10: 0x24420004
    ctx->pc = 0x2cdd10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdd14: 0xac490000
    ctx->pc = 0x2cdd14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x2cdd18: 0x24420004
    ctx->pc = 0x2cdd18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdd1c: 0xac550000
    ctx->pc = 0x2cdd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x2cdd20: 0x24420004
    ctx->pc = 0x2cdd20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdd24: 0xac400000
    ctx->pc = 0x2cdd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cdd28: 0x24420004
    ctx->pc = 0x2cdd28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdd2c: 0xacc22970
    ctx->pc = 0x2cdd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 10608), GPR_U32(ctx, 2));
label_2cdd30:
    // 0x2cdd30: 0xdfbf00c0
    ctx->pc = 0x2cdd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2cdd34:
    // 0x2cdd34: 0xdfbe00b0
    ctx->pc = 0x2cdd34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2cdd38:
    // 0x2cdd38: 0xdfb700a0
    ctx->pc = 0x2cdd38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2cdd3c:
    // 0x2cdd3c: 0xdfb60090
    ctx->pc = 0x2cdd3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cdd40: 0xdfb50080
    ctx->pc = 0x2cdd40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cdd44: 0xdfb40070
    ctx->pc = 0x2cdd44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cdd48: 0xdfb30060
    ctx->pc = 0x2cdd48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cdd4c: 0xdfb20050
    ctx->pc = 0x2cdd4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cdd50: 0xdfb10040
    ctx->pc = 0x2cdd50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cdd54: 0xdfb00030
    ctx->pc = 0x2cdd54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cdd58: 0xc7b800f0
    ctx->pc = 0x2cdd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2cdd5c: 0xc7b700e8
    ctx->pc = 0x2cdd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2cdd60: 0xc7b600e0
    ctx->pc = 0x2cdd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2cdd64: 0xc7b500d8
    ctx->pc = 0x2cdd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cdd68: 0xc7b400d0
    ctx->pc = 0x2cdd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cdd6c: 0x3e00008
    ctx->pc = 0x2CDD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDD70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CDD30u: goto label_2cdd30;
            case 0x2CDD34u: goto label_2cdd34;
            case 0x2CDD38u: goto label_2cdd38;
            case 0x2CDD3Cu: goto label_2cdd3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CDD74u;
}
