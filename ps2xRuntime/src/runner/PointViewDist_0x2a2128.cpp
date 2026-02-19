#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PointViewDist
// Address: 0x2a2128 - 0x2a22a8
void PointViewDist_0x2a2128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a2128u;

    // 0x2a2128: 0x182d
    ctx->pc = 0x2a2128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a212c: 0x3c02003a
    ctx->pc = 0x2a212cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2a2130: 0x8c421bd0
    ctx->pc = 0x2a2130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2a2134: 0x3c0160ad
    ctx->pc = 0x2a2134u;
    SET_GPR_U32(ctx, 1, ((uint32_t)24749 << 16));
    // 0x2a2138: 0x342178ec
    ctx->pc = 0x2a2138u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30956));
    // 0x2a213c: 0x44811000
    ctx->pc = 0x2a213cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2a2140: 0xc4810008
    ctx->pc = 0x2a2140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2144: 0xc440005c
    ctx->pc = 0x2a2144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2148: 0x46000841
    ctx->pc = 0x2a2148u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a214c: 0x460c0841
    ctx->pc = 0x2a214cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2a2150: 0x46020834
    ctx->pc = 0x2a2150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2154: 0x0
    ctx->pc = 0x2a2154u;
    // NOP
    // 0x2a2158: 0x45000008
    ctx->pc = 0x2A2158u;
    {
        const bool branch_taken_0x2a2158 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A215Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a2158) {
            ctx->pc = 0x2A217Cu;
            goto label_2a217c;
        }
    }
    ctx->pc = 0x2A2160u;
    // 0x2a2160: 0x46000886
    ctx->pc = 0x2a2160u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2a2164: 0x44800000
    ctx->pc = 0x2a2164u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2a2168: 0x46001034
    ctx->pc = 0x2a2168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a216c: 0x0
    ctx->pc = 0x2a216cu;
    // NOP
    // 0x2a2170: 0x45000002
    ctx->pc = 0x2A2170u;
    {
        const bool branch_taken_0x2a2170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2174u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2a2170) {
            ctx->pc = 0x2A217Cu;
            goto label_2a217c;
        }
    }
    ctx->pc = 0x2A2178u;
    // 0x2a2178: 0x24030001
    ctx->pc = 0x2a2178u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2a217c:
    // 0x2a217c: 0xc4810008
    ctx->pc = 0x2a217cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2180: 0xc4400024
    ctx->pc = 0x2a2180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2184: 0x460008c2
    ctx->pc = 0x2a2184u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a2188: 0xc4400028
    ctx->pc = 0x2a2188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a218c: 0x46000902
    ctx->pc = 0x2a218cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a2190: 0xc4800000
    ctx->pc = 0x2a2190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2194: 0x46001840
    ctx->pc = 0x2a2194u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2a2198: 0xc4400034
    ctx->pc = 0x2a2198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a219c: 0x46000842
    ctx->pc = 0x2a219cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a21a0: 0x460c0841
    ctx->pc = 0x2a21a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2a21a4: 0x46020834
    ctx->pc = 0x2a21a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a21a8: 0x0
    ctx->pc = 0x2a21a8u;
    // NOP
    // 0x2a21ac: 0x45020009
    ctx->pc = 0x2A21ACu;
    {
        const bool branch_taken_0x2a21ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a21ac) {
            ctx->pc = 0x2A21B0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2A21D4u;
            goto label_2a21d4;
        }
    }
    ctx->pc = 0x2A21B4u;
    // 0x2a21b4: 0x46000886
    ctx->pc = 0x2a21b4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2a21b8: 0x44800000
    ctx->pc = 0x2a21b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2a21bc: 0x46001034
    ctx->pc = 0x2a21bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a21c0: 0x0
    ctx->pc = 0x2a21c0u;
    // NOP
    // 0x2a21c4: 0x45000002
    ctx->pc = 0x2A21C4u;
    {
        const bool branch_taken_0x2a21c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A21C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x2a21c4) {
            ctx->pc = 0x2A21D0u;
            goto label_2a21d0;
        }
    }
    ctx->pc = 0x2A21CCu;
    // 0x2a21cc: 0x34630010
    ctx->pc = 0x2a21ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16));
label_2a21d0:
    // 0x2a21d0: 0xc4800000
    ctx->pc = 0x2a21d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a21d4:
    // 0x2a21d4: 0x46001841
    ctx->pc = 0x2a21d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2a21d8: 0xc4400034
    ctx->pc = 0x2a21d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a21dc: 0x46000842
    ctx->pc = 0x2a21dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a21e0: 0x460c0841
    ctx->pc = 0x2a21e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2a21e4: 0x46020834
    ctx->pc = 0x2a21e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a21e8: 0x0
    ctx->pc = 0x2a21e8u;
    // NOP
    // 0x2a21ec: 0x45020009
    ctx->pc = 0x2A21ECu;
    {
        const bool branch_taken_0x2a21ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a21ec) {
            ctx->pc = 0x2A21F0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2A2214u;
            goto label_2a2214;
        }
    }
    ctx->pc = 0x2A21F4u;
    // 0x2a21f4: 0x46000886
    ctx->pc = 0x2a21f4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2a21f8: 0x44800000
    ctx->pc = 0x2a21f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2a21fc: 0x46001034
    ctx->pc = 0x2a21fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2200: 0x0
    ctx->pc = 0x2a2200u;
    // NOP
    // 0x2a2204: 0x45000002
    ctx->pc = 0x2A2204u;
    {
        const bool branch_taken_0x2a2204 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2208u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2a2204) {
            ctx->pc = 0x2A2210u;
            goto label_2a2210;
        }
    }
    ctx->pc = 0x2A220Cu;
    // 0x2a220c: 0x34630020
    ctx->pc = 0x2a220cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32));
label_2a2210:
    // 0x2a2210: 0xc4800004
    ctx->pc = 0x2a2210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2214:
    // 0x2a2214: 0x46002040
    ctx->pc = 0x2a2214u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a2218: 0xc4400038
    ctx->pc = 0x2a2218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a221c: 0x46000842
    ctx->pc = 0x2a221cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a2220: 0x460c0841
    ctx->pc = 0x2a2220u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2a2224: 0x46020834
    ctx->pc = 0x2a2224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2228: 0x0
    ctx->pc = 0x2a2228u;
    // NOP
    // 0x2a222c: 0x45020009
    ctx->pc = 0x2A222Cu;
    {
        const bool branch_taken_0x2a222c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a222c) {
            ctx->pc = 0x2A2230u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2A2254u;
            goto label_2a2254;
        }
    }
    ctx->pc = 0x2A2234u;
    // 0x2a2234: 0x46000886
    ctx->pc = 0x2a2234u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2a2238: 0x44800000
    ctx->pc = 0x2a2238u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2a223c: 0x46001034
    ctx->pc = 0x2a223cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2240: 0x0
    ctx->pc = 0x2a2240u;
    // NOP
    // 0x2a2244: 0x45000002
    ctx->pc = 0x2A2244u;
    {
        const bool branch_taken_0x2a2244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2248u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 512));
        if (branch_taken_0x2a2244) {
            ctx->pc = 0x2A2250u;
            goto label_2a2250;
        }
    }
    ctx->pc = 0x2A224Cu;
    // 0x2a224c: 0x34630200
    ctx->pc = 0x2a224cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 512));
label_2a2250:
    // 0x2a2250: 0xc4800004
    ctx->pc = 0x2a2250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a2254:
    // 0x2a2254: 0x46002041
    ctx->pc = 0x2a2254u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2a2258: 0xc4400038
    ctx->pc = 0x2a2258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a225c: 0x46000842
    ctx->pc = 0x2a225cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a2260: 0x460c0841
    ctx->pc = 0x2a2260u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x2a2264: 0x46020834
    ctx->pc = 0x2a2264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2268: 0x0
    ctx->pc = 0x2a2268u;
    // NOP
    // 0x2a226c: 0x45000009
    ctx->pc = 0x2A226Cu;
    {
        const bool branch_taken_0x2a226c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2270u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a226c) {
            ctx->pc = 0x2A2294u;
            goto label_2a2294;
        }
    }
    ctx->pc = 0x2A2274u;
    // 0x2a2274: 0x46000886
    ctx->pc = 0x2a2274u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2a2278: 0x44800000
    ctx->pc = 0x2a2278u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2a227c: 0x46001034
    ctx->pc = 0x2a227cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2280: 0x0
    ctx->pc = 0x2a2280u;
    // NOP
    // 0x2a2284: 0x45000003
    ctx->pc = 0x2A2284u;
    {
        const bool branch_taken_0x2a2284 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A2288u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x2a2284) {
            ctx->pc = 0x2A2294u;
            goto label_2a2294;
        }
    }
    ctx->pc = 0x2A228Cu;
    // 0x2a228c: 0x34630100
    ctx->pc = 0x2a228cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 256));
    // 0x2a2290: 0x3c020036
    ctx->pc = 0x2a2290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a2294:
    // 0x2a2294: 0xac45ddf4
    ctx->pc = 0x2a2294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958580), GPR_U32(ctx, 5));
    // 0x2a2298: 0x3c020036
    ctx->pc = 0x2a2298u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a229c: 0xac43ddf0
    ctx->pc = 0x2a229cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958576), GPR_U32(ctx, 3));
    // 0x2a22a0: 0x3e00008
    ctx->pc = 0x2A22A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A22A4u;
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A217Cu: goto label_2a217c;
            case 0x2A21D0u: goto label_2a21d0;
            case 0x2A21D4u: goto label_2a21d4;
            case 0x2A2210u: goto label_2a2210;
            case 0x2A2214u: goto label_2a2214;
            case 0x2A2250u: goto label_2a2250;
            case 0x2A2254u: goto label_2a2254;
            case 0x2A2294u: goto label_2a2294;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A22A8u;
}
