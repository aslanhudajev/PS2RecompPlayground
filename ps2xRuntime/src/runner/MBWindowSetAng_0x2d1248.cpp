#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWindowSetAng
// Address: 0x2d1248 - 0x2d1404
void MBWindowSetAng_0x2d1248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1248u;

    // 0x2d1248: 0x27bdffb0
    ctx->pc = 0x2d1248u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d124c: 0xffbf0010
    ctx->pc = 0x2d124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d1250: 0xffb00000
    ctx->pc = 0x2d1250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1254: 0xe7b90048
    ctx->pc = 0x2d1254u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d1258: 0xe7b80040
    ctx->pc = 0x2d1258u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d125c: 0xe7b70038
    ctx->pc = 0x2d125cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d1260: 0xe7b60030
    ctx->pc = 0x2d1260u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d1264: 0xe7b50028
    ctx->pc = 0x2d1264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d1268: 0xe7b40020
    ctx->pc = 0x2d1268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d126c: 0x46006586
    ctx->pc = 0x2d126cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2d1270: 0x46006d06
    ctx->pc = 0x2d1270u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2d1274: 0x3c02003a
    ctx->pc = 0x2d1274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d1278: 0x8c501bd0
    ctx->pc = 0x2d1278u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2d127c: 0x3c020038
    ctx->pc = 0x2d127cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2d1280: 0x2442b1a8
    ctx->pc = 0x2d1280u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947240));
    // 0x2d1284: 0xac400008
    ctx->pc = 0x2d1284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2d1288: 0xac40000c
    ctx->pc = 0x2d1288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2d128c: 0xe616001c
    ctx->pc = 0x2d128cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2d1290: 0x3c013f00
    ctx->pc = 0x2d1290u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2d1294: 0x4481a800
    ctx->pc = 0x2d1294u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2d1298: 0x4615b642
    ctx->pc = 0x2d1298u;
    ctx->f[25] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x2d129c: 0xc0b9dce
    ctx->pc = 0x2D129Cu;
    SET_GPR_U32(ctx, 31, 0x2D12A4u);
    ctx->pc = 0x2D12A0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12A4u; }
    }
    if (ctx->pc != 0x2D12A4u) { return; }
    ctx->pc = 0x2D12A4u;
    // 0x2d12a4: 0x46000606
    ctx->pc = 0x2d12a4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2d12a8: 0xc0b9e4a
    ctx->pc = 0x2D12A8u;
    SET_GPR_U32(ctx, 31, 0x2D12B0u);
    ctx->pc = 0x2D12ACu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12B0u; }
    }
    if (ctx->pc != 0x2D12B0u) { return; }
    ctx->pc = 0x2D12B0u;
    // 0x2d12b0: 0x0
    ctx->pc = 0x2d12b0u;
    // NOP
    // 0x2d12b4: 0x0
    ctx->pc = 0x2d12b4u;
    // NOP
    // 0x2d12b8: 0x46180003
    ctx->pc = 0x2d12b8u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[24];
    // 0x2d12bc: 0xe6000024
    ctx->pc = 0x2d12bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2d12c0: 0x3c013f80
    ctx->pc = 0x2d12c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d12c4: 0x4481b800
    ctx->pc = 0x2d12c4u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
    // 0x2d12c8: 0x0
    ctx->pc = 0x2d12c8u;
    // NOP
    // 0x2d12cc: 0x0
    ctx->pc = 0x2d12ccu;
    // NOP
    // 0x2d12d0: 0x4600b803
    ctx->pc = 0x2d12d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[0] = ctx->f[23] / ctx->f[0];
    // 0x2d12d4: 0xe600002c
    ctx->pc = 0x2d12d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2d12d8: 0xe6180034
    ctx->pc = 0x2d12d8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2d12dc: 0xe6140020
    ctx->pc = 0x2d12dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2d12e0: 0x4615a642
    ctx->pc = 0x2d12e0u;
    ctx->f[25] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x2d12e4: 0xc0b9dce
    ctx->pc = 0x2D12E4u;
    SET_GPR_U32(ctx, 31, 0x2D12ECu);
    ctx->pc = 0x2D12E8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12ECu; }
    }
    if (ctx->pc != 0x2D12ECu) { return; }
    ctx->pc = 0x2D12ECu;
    // 0x2d12ec: 0x46000606
    ctx->pc = 0x2d12ecu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x2d12f0: 0xc0b9e4a
    ctx->pc = 0x2D12F0u;
    SET_GPR_U32(ctx, 31, 0x2D12F8u);
    ctx->pc = 0x2D12F4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D12F8u; }
    }
    if (ctx->pc != 0x2D12F8u) { return; }
    ctx->pc = 0x2D12F8u;
    // 0x2d12f8: 0x0
    ctx->pc = 0x2d12f8u;
    // NOP
    // 0x2d12fc: 0x0
    ctx->pc = 0x2d12fcu;
    // NOP
    // 0x2d1300: 0x46180003
    ctx->pc = 0x2d1300u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[24];
    // 0x2d1304: 0xe6000028
    ctx->pc = 0x2d1304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2d1308: 0x0
    ctx->pc = 0x2d1308u;
    // NOP
    // 0x2d130c: 0x0
    ctx->pc = 0x2d130cu;
    // NOP
    // 0x2d1310: 0x4600b803
    ctx->pc = 0x2d1310u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[0] = ctx->f[23] / ctx->f[0];
    // 0x2d1314: 0xe6000030
    ctx->pc = 0x2d1314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2d1318: 0xe6180038
    ctx->pc = 0x2d1318u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2d131c: 0xc6030014
    ctx->pc = 0x2d131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d1320: 0x461518c2
    ctx->pc = 0x2d1320u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x2d1324: 0xc601004c
    ctx->pc = 0x2d1324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1328: 0x46011840
    ctx->pc = 0x2d1328u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2d132c: 0xe6010008
    ctx->pc = 0x2d132cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d1330: 0xc6020018
    ctx->pc = 0x2d1330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1334: 0x46151082
    ctx->pc = 0x2d1334u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2d1338: 0xc6010058
    ctx->pc = 0x2d1338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d133c: 0x46011040
    ctx->pc = 0x2d133cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2d1340: 0xe601000c
    ctx->pc = 0x2d1340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d1344: 0xc601002c
    ctx->pc = 0x2d1344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1348: 0x460118c2
    ctx->pc = 0x2d1348u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2d134c: 0xe6030000
    ctx->pc = 0x2d134cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d1350: 0x46001082
    ctx->pc = 0x2d1350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d1354: 0xe6020004
    ctx->pc = 0x2d1354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d1358: 0x4615b582
    ctx->pc = 0x2d1358u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x2d135c: 0xc0b9dce
    ctx->pc = 0x2D135Cu;
    SET_GPR_U32(ctx, 31, 0x2D1364u);
    ctx->pc = 0x2D1360u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1364u; }
    }
    if (ctx->pc != 0x2D1364u) { return; }
    ctx->pc = 0x2D1364u;
    // 0x2d1364: 0x46000506
    ctx->pc = 0x2d1364u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d1368: 0xc0b9e4a
    ctx->pc = 0x2D1368u;
    SET_GPR_U32(ctx, 31, 0x2D1370u);
    ctx->pc = 0x2D136Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1370u; }
    }
    if (ctx->pc != 0x2D1370u) { return; }
    ctx->pc = 0x2D1370u;
    // 0x2d1370: 0x0
    ctx->pc = 0x2d1370u;
    // NOP
    // 0x2d1374: 0x0
    ctx->pc = 0x2d1374u;
    // NOP
    // 0x2d1378: 0x4600a503
    ctx->pc = 0x2d1378u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x2d137c: 0xe6140150
    ctx->pc = 0x2d137cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x2d1380: 0xc0b9dce
    ctx->pc = 0x2D1380u;
    SET_GPR_U32(ctx, 31, 0x2D1388u);
    ctx->pc = 0x2D1384u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1388u; }
    }
    if (ctx->pc != 0x2D1388u) { return; }
    ctx->pc = 0x2D1388u;
    // 0x2d1388: 0x46000506
    ctx->pc = 0x2d1388u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d138c: 0xc0b9e4a
    ctx->pc = 0x2D138Cu;
    SET_GPR_U32(ctx, 31, 0x2D1394u);
    ctx->pc = 0x2D1390u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1394u; }
    }
    if (ctx->pc != 0x2D1394u) { return; }
    ctx->pc = 0x2D1394u;
    // 0x2d1394: 0x0
    ctx->pc = 0x2d1394u;
    // NOP
    // 0x2d1398: 0x0
    ctx->pc = 0x2d1398u;
    // NOP
    // 0x2d139c: 0x4600a503
    ctx->pc = 0x2d139cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x2d13a0: 0xe6140154
    ctx->pc = 0x2d13a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x2d13a4: 0xe6170158
    ctx->pc = 0x2d13a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
    // 0x2d13a8: 0xc6020014
    ctx->pc = 0x2d13a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d13ac: 0x46151082
    ctx->pc = 0x2d13acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x2d13b0: 0xe60201ac
    ctx->pc = 0x2d13b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
    // 0x2d13b4: 0xc6010018
    ctx->pc = 0x2d13b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d13b8: 0x46150842
    ctx->pc = 0x2d13b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2d13bc: 0xe60101b0
    ctx->pc = 0x2d13bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x2d13c0: 0xc6000010
    ctx->pc = 0x2d13c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d13c4: 0xe60001b4
    ctx->pc = 0x2d13c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
    // 0x2d13c8: 0xe60201a0
    ctx->pc = 0x2d13c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2d13cc: 0xc6000058
    ctx->pc = 0x2d13ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d13d0: 0x46000840
    ctx->pc = 0x2d13d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d13d4: 0xe60101a4
    ctx->pc = 0x2d13d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x2d13d8: 0xae0001a8
    ctx->pc = 0x2d13d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x2d13dc: 0xdfbf0010
    ctx->pc = 0x2d13dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d13e0: 0xdfb00000
    ctx->pc = 0x2d13e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d13e4: 0xc7b90048
    ctx->pc = 0x2d13e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2d13e8: 0xc7b80040
    ctx->pc = 0x2d13e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2d13ec: 0xc7b70038
    ctx->pc = 0x2d13ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d13f0: 0xc7b60030
    ctx->pc = 0x2d13f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d13f4: 0xc7b50028
    ctx->pc = 0x2d13f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d13f8: 0xc7b40020
    ctx->pc = 0x2d13f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d13fc: 0x3e00008
    ctx->pc = 0x2D13FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1400u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1404u;
}
