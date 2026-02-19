#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setup_player_models
// Address: 0x22e6a8 - 0x22e7e8
void setup_player_models_0x22e6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22e6a8u;

    // 0x22e6a8: 0x27bdff90
    ctx->pc = 0x22e6a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22e6ac: 0xffbf0060
    ctx->pc = 0x22e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22e6b0: 0xffb50050
    ctx->pc = 0x22e6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22e6b4: 0xffb40040
    ctx->pc = 0x22e6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22e6b8: 0xffb30030
    ctx->pc = 0x22e6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22e6bc: 0xffb20020
    ctx->pc = 0x22e6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22e6c0: 0xffb10010
    ctx->pc = 0x22e6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22e6c4: 0xc08b8f4
    ctx->pc = 0x22E6C4u;
    SET_GPR_U32(ctx, 31, 0x22E6CCu);
    ctx->pc = 0x22E6C8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x22E3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMaxPlayerModelSize_0x22e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6CCu; }
    }
    if (ctx->pc != 0x22E6CCu) { return; }
    ctx->pc = 0x22E6CCu;
    // 0x22e6cc: 0x902d
    ctx->pc = 0x22e6ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e6d0: 0x3c02003c
    ctx->pc = 0x22e6d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22e6d4: 0x24541b48
    ctx->pc = 0x22e6d4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 6984));
    // 0x22e6d8: 0x3c020033
    ctx->pc = 0x22e6d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e6dc: 0x2451c7d8
    ctx->pc = 0x22e6dcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294952920));
    // 0x22e6e0: 0x2413ffff
    ctx->pc = 0x22e6e0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22e6e4: 0x3c020033
    ctx->pc = 0x22e6e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e6e8: 0x2455c810
    ctx->pc = 0x22e6e8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294952976));
    // 0x22e6ec: 0x0
    ctx->pc = 0x22e6ecu;
    // NOP
label_22e6f0:
    // 0x22e6f0: 0xc0b4fa0
    ctx->pc = 0x22E6F0u;
    SET_GPR_U32(ctx, 31, 0x22E6F8u);
    ctx->pc = 0x22E6F4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6F8u; }
    }
    if (ctx->pc != 0x22E6F8u) { return; }
    ctx->pc = 0x22E6F8u;
    // 0x22e6f8: 0x26047618
    ctx->pc = 0x22e6f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 30232));
    // 0x22e6fc: 0x240282d
    ctx->pc = 0x22e6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e700: 0xc0b4a34
    ctx->pc = 0x22E700u;
    SET_GPR_U32(ctx, 31, 0x22E708u);
    ctx->pc = 0x22E704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E708u; }
    }
    if (ctx->pc != 0x22E708u) { return; }
    ctx->pc = 0x22E708u;
    // 0x22e708: 0x3c05003a
    ctx->pc = 0x22e708u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22e70c: 0x280202d
    ctx->pc = 0x22e70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e710: 0x24a57638
    ctx->pc = 0x22e710u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30264));
    // 0x22e714: 0xc0b6252
    ctx->pc = 0x22E714u;
    SET_GPR_U32(ctx, 31, 0x22E71Cu);
    ctx->pc = 0x22E718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E71Cu; }
    }
    if (ctx->pc != 0x22E71Cu) { return; }
    ctx->pc = 0x22E71Cu;
    // 0x22e71c: 0x2410004c
    ctx->pc = 0x22e71cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 76));
    // 0x22e720: 0x2508018
    ctx->pc = 0x22e720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e724: 0x2301021
    ctx->pc = 0x22e724u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22e728: 0x40182d
    ctx->pc = 0x22e728u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e72c: 0x8c440018
    ctx->pc = 0x22e72cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22e730: 0x8c650020
    ctx->pc = 0x22e730u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x22e734: 0xc0b1c36
    ctx->pc = 0x22E734u;
    SET_GPR_U32(ctx, 31, 0x22E73Cu);
    ctx->pc = 0x22E738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C70D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_AllocModelMem_0x2c70d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E73Cu; }
    }
    if (ctx->pc != 0x22E73Cu) { return; }
    ctx->pc = 0x22E73Cu;
    // 0x22e73c: 0x2111821
    ctx->pc = 0x22e73cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x22e740: 0xac730000
    ctx->pc = 0x22e740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x22e744: 0x2301821
    ctx->pc = 0x22e744u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22e748: 0xac60000c
    ctx->pc = 0x22e748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x22e74c: 0xac620010
    ctx->pc = 0x22e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x22e750: 0x60102d
    ctx->pc = 0x22e750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e754: 0xc0b4f52
    ctx->pc = 0x22E754u;
    SET_GPR_U32(ctx, 31, 0x22E75Cu);
    ctx->pc = 0x22E758u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E75Cu; }
    }
    if (ctx->pc != 0x22E75Cu) { return; }
    ctx->pc = 0x22E75Cu;
    // 0x22e75c: 0x2301821
    ctx->pc = 0x22e75cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22e760: 0xac620024
    ctx->pc = 0x22e760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x22e764: 0x60102d
    ctx->pc = 0x22e764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e768: 0xac530014
    ctx->pc = 0x22e768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x22e76c: 0xc0b4f52
    ctx->pc = 0x22E76Cu;
    SET_GPR_U32(ctx, 31, 0x22E774u);
    ctx->pc = 0x22E770u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E774u; }
    }
    if (ctx->pc != 0x22E774u) { return; }
    ctx->pc = 0x22E774u;
    // 0x22e774: 0x2301821
    ctx->pc = 0x22e774u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22e778: 0xac620030
    ctx->pc = 0x22e778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x22e77c: 0x60102d
    ctx->pc = 0x22e77cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e780: 0xac53002c
    ctx->pc = 0x22e780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
    // 0x22e784: 0x8c44003c
    ctx->pc = 0x22e784u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x22e788: 0x8c650044
    ctx->pc = 0x22e788u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x22e78c: 0xc0b1c36
    ctx->pc = 0x22E78Cu;
    SET_GPR_U32(ctx, 31, 0x22E794u);
    ctx->pc = 0x22E790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C70D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_AllocModelMem_0x2c70d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E794u; }
    }
    if (ctx->pc != 0x22E794u) { return; }
    ctx->pc = 0x22E794u;
    // 0x22e794: 0x2301821
    ctx->pc = 0x22e794u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22e798: 0xac620034
    ctx->pc = 0x22e798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x22e79c: 0x60102d
    ctx->pc = 0x22e79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e7a0: 0xc0b4f52
    ctx->pc = 0x22E7A0u;
    SET_GPR_U32(ctx, 31, 0x22E7A8u);
    ctx->pc = 0x22E7A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E7A8u; }
    }
    if (ctx->pc != 0x22E7A8u) { return; }
    ctx->pc = 0x22E7A8u;
    // 0x22e7a8: 0x2301821
    ctx->pc = 0x22e7a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22e7ac: 0xac620048
    ctx->pc = 0x22e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x22e7b0: 0x2158021
    ctx->pc = 0x22e7b0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x22e7b4: 0x26520001
    ctx->pc = 0x22e7b4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x22e7b8: 0x2a420004
    ctx->pc = 0x22e7b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x22e7bc: 0x1440ffcc
    ctx->pc = 0x22E7BCu;
    {
        const bool branch_taken_0x22e7bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22E7C0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
        if (branch_taken_0x22e7bc) {
            ctx->pc = 0x22E6F0u;
            goto label_22e6f0;
        }
    }
    ctx->pc = 0x22E7C4u;
    // 0x22e7c4: 0xdfbf0060
    ctx->pc = 0x22e7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22e7c8: 0xdfb50050
    ctx->pc = 0x22e7c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22e7cc: 0xdfb40040
    ctx->pc = 0x22e7ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e7d0: 0xdfb30030
    ctx->pc = 0x22e7d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e7d4: 0xdfb20020
    ctx->pc = 0x22e7d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e7d8: 0xdfb10010
    ctx->pc = 0x22e7d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e7dc: 0xdfb00000
    ctx->pc = 0x22e7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e7e0: 0x3e00008
    ctx->pc = 0x22E7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E7E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E6F0u: goto label_22e6f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E7E8u;
}
