#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ZeroEffect
// Address: 0x27a4d0 - 0x27a590
void ZeroEffect_0x27a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27a4d0u;

    // 0x27a4d0: 0x27bdffe0
    ctx->pc = 0x27a4d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a4d4: 0xffbf0010
    ctx->pc = 0x27a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27a4d8: 0xffb00000
    ctx->pc = 0x27a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a4dc: 0x240200f0
    ctx->pc = 0x27a4dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27a4e0: 0x822018
    ctx->pc = 0x27a4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27a4e4: 0x3c020034
    ctx->pc = 0x27a4e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a4e8: 0x24420eb0
    ctx->pc = 0x27a4e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27a4ec: 0x828021
    ctx->pc = 0x27a4ecu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27a4f0: 0xae000080
    ctx->pc = 0x27a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x27a4f4: 0xae000084
    ctx->pc = 0x27a4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x27a4f8: 0xae000088
    ctx->pc = 0x27a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x27a4fc: 0xae00008c
    ctx->pc = 0x27a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x27a500: 0xae000090
    ctx->pc = 0x27a500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x27a504: 0xae000094
    ctx->pc = 0x27a504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x27a508: 0x8e050014
    ctx->pc = 0x27a508u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27a50c: 0x10a00007
    ctx->pc = 0x27A50Cu;
    {
        const bool branch_taken_0x27a50c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A510u;
        SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
        if (branch_taken_0x27a50c) {
            ctx->pc = 0x27A52Cu;
            goto label_27a52c;
        }
    }
    ctx->pc = 0x27A514u;
    // 0x27a514: 0x8e020064
    ctx->pc = 0x27a514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x27a518: 0x431024
    ctx->pc = 0x27a518u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a51c: 0x14400003
    ctx->pc = 0x27A51Cu;
    {
        const bool branch_taken_0x27a51c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27A520u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x27a51c) {
            ctx->pc = 0x27A52Cu;
            goto label_27a52c;
        }
    }
    ctx->pc = 0x27A524u;
    // 0x27a524: 0xc0b549e
    ctx->pc = 0x27A524u;
    SET_GPR_U32(ctx, 31, 0x27A52Cu);
    ctx->pc = 0x27A528u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A52Cu; }
    }
    if (ctx->pc != 0x27A52Cu) { return; }
    ctx->pc = 0x27A52Cu;
label_27a52c:
    // 0x27a52c: 0x3c013f80
    ctx->pc = 0x27a52cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27a530: 0x44810000
    ctx->pc = 0x27a530u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27a534: 0xe6000098
    ctx->pc = 0x27a534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x27a538: 0xae0000a0
    ctx->pc = 0x27a538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x27a53c: 0xae0000a4
    ctx->pc = 0x27a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x27a540: 0xae0000a8
    ctx->pc = 0x27a540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x27a544: 0xa60000be
    ctx->pc = 0x27a544u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 190), (uint16_t)GPR_U32(ctx, 0));
    // 0x27a548: 0xa60000c0
    ctx->pc = 0x27a548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x27a54c: 0xa60000c2
    ctx->pc = 0x27a54cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 0));
    // 0x27a550: 0xae0000cc
    ctx->pc = 0x27a550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x27a554: 0xae0000d0
    ctx->pc = 0x27a554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x27a558: 0xae00007c
    ctx->pc = 0x27a558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x27a55c: 0x8e0400d4
    ctx->pc = 0x27a55cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27a560: 0x50800004
    ctx->pc = 0x27A560u;
    {
        const bool branch_taken_0x27a560 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x27a560) {
            ctx->pc = 0x27A564u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
            ctx->pc = 0x27A574u;
            goto label_27a574;
        }
    }
    ctx->pc = 0x27A568u;
    // 0x27a568: 0xc0b3bfa
    ctx->pc = 0x27A568u;
    SET_GPR_U32(ctx, 31, 0x27A570u);
    ctx->pc = 0x2CEFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemovePolyInst_0x2cefe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A570u; }
    }
    if (ctx->pc != 0x27A570u) { return; }
    ctx->pc = 0x27A570u;
    // 0x27a570: 0xae0000d4
    ctx->pc = 0x27a570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_27a574:
    // 0x27a574: 0xae000070
    ctx->pc = 0x27a574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x27a578: 0x2402ffff
    ctx->pc = 0x27a578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a57c: 0xa60200e8
    ctx->pc = 0x27a57cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 2));
    // 0x27a580: 0xdfbf0010
    ctx->pc = 0x27a580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a584: 0xdfb00000
    ctx->pc = 0x27a584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a588: 0x3e00008
    ctx->pc = 0x27A588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A58Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A52Cu: goto label_27a52c;
            case 0x27A574u: goto label_27a574;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A590u;
}
