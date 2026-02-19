#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitDynobjGrid
// Address: 0x21f520 - 0x21f62c
void InitDynobjGrid_0x21f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21f520u;

    // 0x21f520: 0x27bdffd0
    ctx->pc = 0x21f520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f524: 0xffbf0020
    ctx->pc = 0x21f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21f528: 0xffb10010
    ctx->pc = 0x21f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21f52c: 0xffb00000
    ctx->pc = 0x21f52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f530: 0x3c03003c
    ctx->pc = 0x21f530u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21f534: 0x3c100032
    ctx->pc = 0x21f534u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x21f538: 0x2610f9f8
    ctx->pc = 0x21f538u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294965752));
    // 0x21f53c: 0xc6000024
    ctx->pc = 0x21f53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f540: 0xc6010018
    ctx->pc = 0x21f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f544: 0x46010001
    ctx->pc = 0x21f544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21f548: 0x3c020032
    ctx->pc = 0x21f548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21f54c: 0xc442fd48
    ctx->pc = 0x21f54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21f550: 0x0
    ctx->pc = 0x21f550u;
    // NOP
    // 0x21f554: 0x0
    ctx->pc = 0x21f554u;
    // NOP
    // 0x21f558: 0x46020003
    ctx->pc = 0x21f558u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x21f55c: 0x46000064
    ctx->pc = 0x21f55cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21f560: 0x44040800
    ctx->pc = 0x21f560u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
    // 0x21f564: 0x24840001
    ctx->pc = 0x21f564u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x21f568: 0xac64d5f8
    ctx->pc = 0x21f568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956536), GPR_U32(ctx, 4));
    // 0x21f56c: 0x3c03003c
    ctx->pc = 0x21f56cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21f570: 0xc600002c
    ctx->pc = 0x21f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f574: 0xc6010020
    ctx->pc = 0x21f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f578: 0x46010001
    ctx->pc = 0x21f578u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21f57c: 0x0
    ctx->pc = 0x21f57cu;
    // NOP
    // 0x21f580: 0x0
    ctx->pc = 0x21f580u;
    // NOP
    // 0x21f584: 0x46020003
    ctx->pc = 0x21f584u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x21f588: 0x46000064
    ctx->pc = 0x21f588u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21f58c: 0x44020800
    ctx->pc = 0x21f58cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x21f590: 0x24420001
    ctx->pc = 0x21f590u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f594: 0xac62d5fc
    ctx->pc = 0x21f594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956540), GPR_U32(ctx, 2));
    // 0x21f598: 0x3c03003c
    ctx->pc = 0x21f598u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21f59c: 0x822018
    ctx->pc = 0x21f59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21f5a0: 0xac64d5f4
    ctx->pc = 0x21f5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956532), GPR_U32(ctx, 4));
    // 0x21f5a4: 0x3c11003c
    ctx->pc = 0x21f5a4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x21f5a8: 0xc0b4f52
    ctx->pc = 0x21F5A8u;
    SET_GPR_U32(ctx, 31, 0x21F5B0u);
    ctx->pc = 0x21F5ACu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5B0u; }
    }
    if (ctx->pc != 0x21F5B0u) { return; }
    ctx->pc = 0x21F5B0u;
    // 0x21f5b0: 0xae22d5f0
    ctx->pc = 0x21f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294956528), GPR_U32(ctx, 2));
    // 0x21f5b4: 0x3c03003c
    ctx->pc = 0x21f5b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21f5b8: 0x8e020010
    ctx->pc = 0x21f5b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21f5bc: 0x8c440000
    ctx->pc = 0x21f5bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21f5c0: 0x42582
    ctx->pc = 0x21f5c0u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 22));
    // 0x21f5c4: 0xac64d5e0
    ctx->pc = 0x21f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956512), GPR_U32(ctx, 4));
    // 0x21f5c8: 0x3c10003c
    ctx->pc = 0x21f5c8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x21f5cc: 0x24020050
    ctx->pc = 0x21f5ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x21f5d0: 0xc0b4f52
    ctx->pc = 0x21F5D0u;
    SET_GPR_U32(ctx, 31, 0x21F5D8u);
    ctx->pc = 0x21F5D4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5D8u; }
    }
    if (ctx->pc != 0x21F5D8u) { return; }
    ctx->pc = 0x21F5D8u;
    // 0x21f5d8: 0xae02d5dc
    ctx->pc = 0x21f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956508), GPR_U32(ctx, 2));
    // 0x21f5dc: 0xc087d0c
    ctx->pc = 0x21F5DCu;
    SET_GPR_U32(ctx, 31, 0x21F5E4u);
    ctx->pc = 0x21F5E0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    ctx->pc = 0x21F430u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitDynobjList_0x21f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5E4u; }
    }
    if (ctx->pc != 0x21F5E4u) { return; }
    ctx->pc = 0x21F5E4u;
    // 0x21f5e4: 0x24420001
    ctx->pc = 0x21f5e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f5e8: 0xae22d5e8
    ctx->pc = 0x21f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294956520), GPR_U32(ctx, 2));
    // 0x21f5ec: 0x3c10003c
    ctx->pc = 0x21f5ecu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x21f5f0: 0xc0b4f52
    ctx->pc = 0x21F5F0u;
    SET_GPR_U32(ctx, 31, 0x21F5F8u);
    ctx->pc = 0x21F5F4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5F8u; }
    }
    if (ctx->pc != 0x21F5F8u) { return; }
    ctx->pc = 0x21F5F8u;
    // 0x21f5f8: 0xae02d5e4
    ctx->pc = 0x21f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956516), GPR_U32(ctx, 2));
    // 0x21f5fc: 0x8e26d5e8
    ctx->pc = 0x21f5fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 4294956520)));
    // 0x21f600: 0x40202d
    ctx->pc = 0x21f600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f604: 0x282d
    ctx->pc = 0x21f604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f608: 0xc0becc6
    ctx->pc = 0x21F608u;
    SET_GPR_U32(ctx, 31, 0x21F610u);
    ctx->pc = 0x21F60Cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F610u; }
    }
    if (ctx->pc != 0x21F610u) { return; }
    ctx->pc = 0x21F610u;
    // 0x21f610: 0x3c02003c
    ctx->pc = 0x21f610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21f614: 0xac40d5ec
    ctx->pc = 0x21f614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956524), GPR_U32(ctx, 0));
    // 0x21f618: 0xdfbf0020
    ctx->pc = 0x21f618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f61c: 0xdfb10010
    ctx->pc = 0x21f61cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f620: 0xdfb00000
    ctx->pc = 0x21f620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f624: 0x3e00008
    ctx->pc = 0x21F624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F628u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F62Cu;
}
