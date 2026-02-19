#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitMovie
// Address: 0x2dc928 - 0x2dcbe8
void InitMovie_0x2dc928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dc928u;

    // 0x2dc928: 0x27bdfeb0
    ctx->pc = 0x2dc928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2dc92c: 0xffbf0140
    ctx->pc = 0x2dc92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x2dc930: 0xffb30130
    ctx->pc = 0x2dc930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x2dc934: 0xffb20120
    ctx->pc = 0x2dc934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x2dc938: 0xffb10110
    ctx->pc = 0x2dc938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x2dc93c: 0xffb00100
    ctx->pc = 0x2dc93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2dc940: 0x80182d
    ctx->pc = 0x2dc940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc944: 0xa0382d
    ctx->pc = 0x2dc944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc948: 0xc0982d
    ctx->pc = 0x2dc948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc94c: 0x3c10003a
    ctx->pc = 0x2dc94cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2dc950: 0x24020001
    ctx->pc = 0x2dc950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc954: 0xae0229e4
    ctx->pc = 0x2dc954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10724), GPR_U32(ctx, 2));
    // 0x2dc958: 0x3a0202d
    ctx->pc = 0x2dc958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc95c: 0x3c05003c
    ctx->pc = 0x2dc95cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2dc960: 0x24a58350
    ctx->pc = 0x2dc960u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935376));
    // 0x2dc964: 0xc0b6252
    ctx->pc = 0x2DC964u;
    SET_GPR_U32(ctx, 31, 0x2DC96Cu);
    ctx->pc = 0x2DC968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC96Cu; }
    }
    if (ctx->pc != 0x2DC96Cu) { return; }
    ctx->pc = 0x2DC96Cu;
    // 0x2dc96c: 0x24020003
    ctx->pc = 0x2dc96cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dc970: 0xae0229e4
    ctx->pc = 0x2dc970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10724), GPR_U32(ctx, 2));
    // 0x2dc974: 0x3c10003e
    ctx->pc = 0x2dc974u;
    SET_GPR_U32(ctx, 16, ((uint32_t)62 << 16));
    // 0x2dc978: 0x8e028014
    ctx->pc = 0x2dc978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294934548)));
    // 0x2dc97c: 0x54400038
    ctx->pc = 0x2DC97Cu;
    {
        const bool branch_taken_0x2dc97c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dc97c) {
            ctx->pc = 0x2DC980u;
            SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
            ctx->pc = 0x2DCA60u;
            goto label_2dca60;
        }
    }
    ctx->pc = 0x2DC984u;
    // 0x2dc984: 0x3c040025
    ctx->pc = 0x2dc984u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x2dc988: 0x34848000
    ctx->pc = 0x2dc988u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 32768));
    // 0x2dc98c: 0x3c05003c
    ctx->pc = 0x2dc98cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2dc990: 0xc0b7212
    ctx->pc = 0x2DC990u;
    SET_GPR_U32(ctx, 31, 0x2DC998u);
    ctx->pc = 0x2DC994u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935392));
    ctx->pc = 0x2DC848u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem64_0x2dc848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC998u; }
    }
    if (ctx->pc != 0x2DC998u) { return; }
    ctx->pc = 0x2DC998u;
    // 0x2dc998: 0x1040002e
    ctx->pc = 0x2DC998u;
    {
        const bool branch_taken_0x2dc998 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC99Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294934548), GPR_U32(ctx, 2));
        if (branch_taken_0x2dc998) {
            ctx->pc = 0x2DCA54u;
            goto label_2dca54;
        }
    }
    ctx->pc = 0x2DC9A0u;
    // 0x2dc9a0: 0x3c10003e
    ctx->pc = 0x2dc9a0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)62 << 16));
    // 0x2dc9a4: 0x3c040007
    ctx->pc = 0x2dc9a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)7 << 16));
    // 0x2dc9a8: 0x34842480
    ctx->pc = 0x2dc9a8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 9344));
    // 0x2dc9ac: 0x3c05003c
    ctx->pc = 0x2dc9acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2dc9b0: 0xc0b7212
    ctx->pc = 0x2DC9B0u;
    SET_GPR_U32(ctx, 31, 0x2DC9B8u);
    ctx->pc = 0x2DC9B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935432));
    ctx->pc = 0x2DC848u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem64_0x2dc848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9B8u; }
    }
    if (ctx->pc != 0x2DC9B8u) { return; }
    ctx->pc = 0x2DC9B8u;
    // 0x2dc9b8: 0x10400026
    ctx->pc = 0x2DC9B8u;
    {
        const bool branch_taken_0x2dc9b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC9BCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294934552), GPR_U32(ctx, 2));
        if (branch_taken_0x2dc9b8) {
            ctx->pc = 0x2DCA54u;
            goto label_2dca54;
        }
    }
    ctx->pc = 0x2DC9C0u;
    // 0x2dc9c0: 0x3c10003e
    ctx->pc = 0x2dc9c0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)62 << 16));
    // 0x2dc9c4: 0x3c040015
    ctx->pc = 0x2dc9c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)21 << 16));
    // 0x2dc9c8: 0x34842000
    ctx->pc = 0x2dc9c8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8192));
    // 0x2dc9cc: 0x3c05003c
    ctx->pc = 0x2dc9ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2dc9d0: 0xc0b7212
    ctx->pc = 0x2DC9D0u;
    SET_GPR_U32(ctx, 31, 0x2DC9D8u);
    ctx->pc = 0x2DC9D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935472));
    ctx->pc = 0x2DC848u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem64_0x2dc848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9D8u; }
    }
    if (ctx->pc != 0x2DC9D8u) { return; }
    ctx->pc = 0x2DC9D8u;
    // 0x2dc9d8: 0x1040001e
    ctx->pc = 0x2DC9D8u;
    {
        const bool branch_taken_0x2dc9d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC9DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294938704), GPR_U32(ctx, 2));
        if (branch_taken_0x2dc9d8) {
            ctx->pc = 0x2DCA54u;
            goto label_2dca54;
        }
    }
    ctx->pc = 0x2DC9E0u;
    // 0x2dc9e0: 0x3c10003e
    ctx->pc = 0x2dc9e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)62 << 16));
    // 0x2dc9e4: 0x24040800
    ctx->pc = 0x2dc9e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2dc9e8: 0x3c05003c
    ctx->pc = 0x2dc9e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2dc9ec: 0xc0b7212
    ctx->pc = 0x2DC9ECu;
    SET_GPR_U32(ctx, 31, 0x2DC9F4u);
    ctx->pc = 0x2DC9F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935512));
    ctx->pc = 0x2DC848u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem64_0x2dc848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC9F4u; }
    }
    if (ctx->pc != 0x2DC9F4u) { return; }
    ctx->pc = 0x2DC9F4u;
    // 0x2dc9f4: 0x10400017
    ctx->pc = 0x2DC9F4u;
    {
        const bool branch_taken_0x2dc9f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC9F8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294938708), GPR_U32(ctx, 2));
        if (branch_taken_0x2dc9f4) {
            ctx->pc = 0x2DCA54u;
            goto label_2dca54;
        }
    }
    ctx->pc = 0x2DC9FCu;
    // 0x2dc9fc: 0x3c10003a
    ctx->pc = 0x2dc9fcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2dca00: 0x3c040005
    ctx->pc = 0x2dca00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)5 << 16));
    // 0x2dca04: 0x3484000c
    ctx->pc = 0x2dca04u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 12));
    // 0x2dca08: 0x3c05003c
    ctx->pc = 0x2dca08u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2dca0c: 0xc0b7212
    ctx->pc = 0x2DCA0Cu;
    SET_GPR_U32(ctx, 31, 0x2DCA14u);
    ctx->pc = 0x2DCA10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935552));
    ctx->pc = 0x2DC848u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem64_0x2dc848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA14u; }
    }
    if (ctx->pc != 0x2DCA14u) { return; }
    ctx->pc = 0x2DCA14u;
    // 0x2dca14: 0x1040000f
    ctx->pc = 0x2DCA14u;
    {
        const bool branch_taken_0x2dca14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCA18u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 10756), GPR_U32(ctx, 2));
        if (branch_taken_0x2dca14) {
            ctx->pc = 0x2DCA54u;
            goto label_2dca54;
        }
    }
    ctx->pc = 0x2DCA1Cu;
    // 0x2dca1c: 0x3c10003e
    ctx->pc = 0x2dca1cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)62 << 16));
    // 0x2dca20: 0x3c040003
    ctx->pc = 0x2dca20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)3 << 16));
    // 0x2dca24: 0x3c05003c
    ctx->pc = 0x2dca24u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2dca28: 0xc0b7212
    ctx->pc = 0x2DCA28u;
    SET_GPR_U32(ctx, 31, 0x2DCA30u);
    ctx->pc = 0x2DCA2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935592));
    ctx->pc = 0x2DC848u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem64_0x2dc848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA30u; }
    }
    if (ctx->pc != 0x2DCA30u) { return; }
    ctx->pc = 0x2DCA30u;
    // 0x2dca30: 0x10400008
    ctx->pc = 0x2DCA30u;
    {
        const bool branch_taken_0x2dca30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCA34u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294938712), GPR_U32(ctx, 2));
        if (branch_taken_0x2dca30) {
            ctx->pc = 0x2DCA54u;
            goto label_2dca54;
        }
    }
    ctx->pc = 0x2DCA38u;
    // 0x2dca38: 0x3c10003e
    ctx->pc = 0x2dca38u;
    SET_GPR_U32(ctx, 16, ((uint32_t)62 << 16));
    // 0x2dca3c: 0x3c040008
    ctx->pc = 0x2dca3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)8 << 16));
    // 0x2dca40: 0x3c05003c
    ctx->pc = 0x2dca40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2dca44: 0xc0b7212
    ctx->pc = 0x2DCA44u;
    SET_GPR_U32(ctx, 31, 0x2DCA4Cu);
    ctx->pc = 0x2DCA48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935640));
    ctx->pc = 0x2DC848u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem64_0x2dc848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCA4Cu; }
    }
    if (ctx->pc != 0x2DCA4Cu) { return; }
    ctx->pc = 0x2DCA4Cu;
    // 0x2dca4c: 0x14400003
    ctx->pc = 0x2DCA4Cu;
    {
        const bool branch_taken_0x2dca4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DCA50u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294938716), GPR_U32(ctx, 2));
        if (branch_taken_0x2dca4c) {
            ctx->pc = 0x2DCA5Cu;
            goto label_2dca5c;
        }
    }
    ctx->pc = 0x2DCA54u;
label_2dca54:
    // 0x2dca54: 0x1000005d
    ctx->pc = 0x2DCA54u;
    {
        const bool branch_taken_0x2dca54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCA58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dca54) {
            ctx->pc = 0x2DCBCCu;
            goto label_2dcbcc;
        }
    }
    ctx->pc = 0x2DCA5Cu;
label_2dca5c:
    // 0x2dca5c: 0x3c10003a
    ctx->pc = 0x2dca5cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2dca60:
    // 0x2dca60: 0x3c03003a
    ctx->pc = 0x2dca60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dca64: 0x8c6229d4
    ctx->pc = 0x2dca64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10708)));
    // 0x2dca68: 0x24420001
    ctx->pc = 0x2dca68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dca6c: 0xac6229d4
    ctx->pc = 0x2dca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10708), GPR_U32(ctx, 2));
    // 0x2dca70: 0x3c02003a
    ctx->pc = 0x2dca70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dca74: 0xac4029d8
    ctx->pc = 0x2dca74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10712), GPR_U32(ctx, 0));
    // 0x2dca78: 0x3c03003a
    ctx->pc = 0x2dca78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dca7c: 0x24020001
    ctx->pc = 0x2dca7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dca80: 0xac622d90
    ctx->pc = 0x2dca80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11664), GPR_U32(ctx, 2));
    // 0x2dca84: 0x3c02003a
    ctx->pc = 0x2dca84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dca88: 0xac402d9c
    ctx->pc = 0x2dca88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11676), GPR_U32(ctx, 0));
    // 0x2dca8c: 0x3c02003a
    ctx->pc = 0x2dca8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dca90: 0xac4029c0
    ctx->pc = 0x2dca90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10688), GPR_U32(ctx, 0));
    // 0x2dca94: 0x3c03003a
    ctx->pc = 0x2dca94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dca98: 0x3c02003a
    ctx->pc = 0x2dca98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dca9c: 0x8c4222f8
    ctx->pc = 0x2dca9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x2dcaa0: 0xac6229e0
    ctx->pc = 0x2dcaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 2));
    // 0x2dcaa4: 0x24020005
    ctx->pc = 0x2dcaa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dcaa8: 0xc0aa356
    ctx->pc = 0x2DCAA8u;
    SET_GPR_U32(ctx, 31, 0x2DCAB0u);
    ctx->pc = 0x2DCAACu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10724), GPR_U32(ctx, 2));
    ctx->pc = 0x2A8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCloseDisplay_0x2a8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCAB0u; }
    }
    if (ctx->pc != 0x2DCAB0u) { return; }
    ctx->pc = 0x2DCAB0u;
    // 0x2dcab0: 0x24020007
    ctx->pc = 0x2dcab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dcab4: 0xc0b80ba
    ctx->pc = 0x2DCAB4u;
    SET_GPR_U32(ctx, 31, 0x2DCABCu);
    ctx->pc = 0x2DCAB8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10724), GPR_U32(ctx, 2));
    ctx->pc = 0x2E02E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x2e02e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCABCu; }
    }
    if (ctx->pc != 0x2DCABCu) { return; }
    ctx->pc = 0x2DCABCu;
    // 0x2dcabc: 0x24020008
    ctx->pc = 0x2dcabcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dcac0: 0xae0229e4
    ctx->pc = 0x2dcac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10724), GPR_U32(ctx, 2));
    // 0x2dcac4: 0xc0b86e8
    ctx->pc = 0x2DCAC4u;
    SET_GPR_U32(ctx, 31, 0x2DCACCu);
    ctx->pc = 0x2DCAC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2E1BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaReset_0x2e1ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCACCu; }
    }
    if (ctx->pc != 0x2DCACCu) { return; }
    ctx->pc = 0x2DCACCu;
    // 0x2dcacc: 0x24020009
    ctx->pc = 0x2dcaccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x2dcad0: 0xae0229e4
    ctx->pc = 0x2dcad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10724), GPR_U32(ctx, 2));
    // 0x2dcad4: 0xc0b8312
    ctx->pc = 0x2DCAD4u;
    SET_GPR_U32(ctx, 31, 0x2DCADCu);
    ctx->pc = 0x2DCAD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x2e0c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCADCu; }
    }
    if (ctx->pc != 0x2DCADCu) { return; }
    ctx->pc = 0x2DCADCu;
    // 0x2dcadc: 0x2402000a
    ctx->pc = 0x2dcadcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dcae0: 0xae0229e4
    ctx->pc = 0x2dcae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10724), GPR_U32(ctx, 2));
    // 0x2dcae4: 0x3c020037
    ctx->pc = 0x2dcae4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2dcae8: 0x202d
    ctx->pc = 0x2dcae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcaec: 0x24050001
    ctx->pc = 0x2dcaecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcaf0: 0x8446834c
    ctx->pc = 0x2dcaf0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935372)));
    // 0x2dcaf4: 0xc0b8072
    ctx->pc = 0x2DCAF4u;
    SET_GPR_U32(ctx, 31, 0x2DCAFCu);
    ctx->pc = 0x2DCAF8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2E01C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetGraph_0x2e01c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCAFCu; }
    }
    if (ctx->pc != 0x2DCAFCu) { return; }
    ctx->pc = 0x2DCAFCu;
    // 0x2dcafc: 0x2402000b
    ctx->pc = 0x2dcafcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x2dcb00: 0xae0229e4
    ctx->pc = 0x2dcb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10724), GPR_U32(ctx, 2));
    // 0x2dcb04: 0x3c120037
    ctx->pc = 0x2dcb04u;
    SET_GPR_U32(ctx, 18, ((uint32_t)55 << 16));
    // 0x2dcb08: 0x3c110037
    ctx->pc = 0x2dcb08u;
    SET_GPR_U32(ctx, 17, ((uint32_t)55 << 16));
    // 0x2dcb0c: 0x202d
    ctx->pc = 0x2dcb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb10: 0x282d
    ctx->pc = 0x2dcb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb14: 0x302d
    ctx->pc = 0x2dcb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb18: 0x8e478350
    ctx->pc = 0x2dcb18u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 4294935376)));
    // 0x2dcb1c: 0xc0b6fb8
    ctx->pc = 0x2DCB1Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB24u);
    ctx->pc = 0x2DCB20u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 4294935380)));
    ctx->pc = 0x2DBEE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        clearGsMem_0x2dbee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB24u; }
    }
    if (ctx->pc != 0x2DCB24u) { return; }
    ctx->pc = 0x2DCB24u;
    // 0x2dcb24: 0x2402000c
    ctx->pc = 0x2dcb24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dcb28: 0xae0229e4
    ctx->pc = 0x2dcb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10724), GPR_U32(ctx, 2));
    // 0x2dcb2c: 0x8e278354
    ctx->pc = 0x2dcb2cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4294935380)));
    // 0x2dcb30: 0x717c2
    ctx->pc = 0x2dcb30u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 31));
    // 0x2dcb34: 0xe23821
    ctx->pc = 0x2dcb34u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2dcb38: 0x73bc0
    ctx->pc = 0x2dcb38u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 15));
    // 0x2dcb3c: 0x3c04003a
    ctx->pc = 0x2dcb3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dcb40: 0x24842b60
    ctx->pc = 0x2dcb40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11104));
    // 0x2dcb44: 0x282d
    ctx->pc = 0x2dcb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb48: 0x86468350
    ctx->pc = 0x2dcb48u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294935376)));
    // 0x2dcb4c: 0x73c03
    ctx->pc = 0x2dcb4cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2dcb50: 0x402d
    ctx->pc = 0x2dcb50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb54: 0x482d
    ctx->pc = 0x2dcb54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb58: 0xc0b8254
    ctx->pc = 0x2DCB58u;
    SET_GPR_U32(ctx, 31, 0x2DCB60u);
    ctx->pc = 0x2DCB5Cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2E0950u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDBuff_0x2e0950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB60u; }
    }
    if (ctx->pc != 0x2DCB60u) { return; }
    ctx->pc = 0x2DCB60u;
    // 0x2dcb60: 0xc0c0e18
    ctx->pc = 0x2DCB60u;
    SET_GPR_U32(ctx, 31, 0x2DCB68u);
    ctx->pc = 0x2DCB64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB68u; }
    }
    if (ctx->pc != 0x2DCB68u) { return; }
    ctx->pc = 0x2DCB68u;
    // 0x2dcb68: 0x24020014
    ctx->pc = 0x2dcb68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2dcb6c: 0xae0229e4
    ctx->pc = 0x2dcb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10724), GPR_U32(ctx, 2));
    // 0x2dcb70: 0x3a0202d
    ctx->pc = 0x2dcb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb74: 0xc0b74e6
    ctx->pc = 0x2DCB74u;
    SET_GPR_U32(ctx, 31, 0x2DCB7Cu);
    ctx->pc = 0x2DCB78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DD398u;
    {
        const uint32_t __entryPc = ctx->pc;
        initAll_0x2dd398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB7Cu; }
    }
    if (ctx->pc != 0x2DCB7Cu) { return; }
    ctx->pc = 0x2DCB7Cu;
    // 0x2dcb7c: 0x10400007
    ctx->pc = 0x2DCB7Cu;
    {
        const bool branch_taken_0x2dcb7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCB80u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x2dcb7c) {
            ctx->pc = 0x2DCB9Cu;
            goto label_2dcb9c;
        }
    }
    ctx->pc = 0x2DCB84u;
    // 0x2dcb84: 0x3c02003a
    ctx->pc = 0x2dcb84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcb88: 0x8c432a14
    ctx->pc = 0x2dcb88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10772)));
    // 0x2dcb8c: 0xac832d94
    ctx->pc = 0x2dcb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11668), GPR_U32(ctx, 3));
    // 0x2dcb90: 0x3c02003a
    ctx->pc = 0x2dcb90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcb94: 0x10000009
    ctx->pc = 0x2DCB94u;
    {
        const bool branch_taken_0x2dcb94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCB98u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 11672), GPR_U32(ctx, 3));
        if (branch_taken_0x2dcb94) {
            ctx->pc = 0x2DCBBCu;
            goto label_2dcbbc;
        }
    }
    ctx->pc = 0x2DCB9Cu;
label_2dcb9c:
    // 0x2dcb9c: 0x3c02003a
    ctx->pc = 0x2dcb9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcba0: 0xac402d94
    ctx->pc = 0x2dcba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11668), GPR_U32(ctx, 0));
    // 0x2dcba4: 0x3c02003a
    ctx->pc = 0x2dcba4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dcba8: 0xac402d98
    ctx->pc = 0x2dcba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11672), GPR_U32(ctx, 0));
    // 0x2dcbac: 0x3c03003a
    ctx->pc = 0x2dcbacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dcbb0: 0x8c622d9c
    ctx->pc = 0x2dcbb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 11676)));
    // 0x2dcbb4: 0x34420002
    ctx->pc = 0x2dcbb4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2dcbb8: 0xac622d9c
    ctx->pc = 0x2dcbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11676), GPR_U32(ctx, 2));
label_2dcbbc:
    // 0x2dcbbc: 0x3c03003a
    ctx->pc = 0x2dcbbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dcbc0: 0x24020063
    ctx->pc = 0x2dcbc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x2dcbc4: 0xac6229e4
    ctx->pc = 0x2dcbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10724), GPR_U32(ctx, 2));
    // 0x2dcbc8: 0x24020001
    ctx->pc = 0x2dcbc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2dcbcc:
    // 0x2dcbcc: 0xdfbf0140
    ctx->pc = 0x2dcbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2dcbd0: 0xdfb30130
    ctx->pc = 0x2dcbd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2dcbd4: 0xdfb20120
    ctx->pc = 0x2dcbd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2dcbd8: 0xdfb10110
    ctx->pc = 0x2dcbd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2dcbdc: 0xdfb00100
    ctx->pc = 0x2dcbdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2dcbe0: 0x3e00008
    ctx->pc = 0x2DCBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCBE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DCA54u: goto label_2dca54;
            case 0x2DCA5Cu: goto label_2dca5c;
            case 0x2DCA60u: goto label_2dca60;
            case 0x2DCB9Cu: goto label_2dcb9c;
            case 0x2DCBBCu: goto label_2dcbbc;
            case 0x2DCBCCu: goto label_2dcbcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DCBE8u;
}
