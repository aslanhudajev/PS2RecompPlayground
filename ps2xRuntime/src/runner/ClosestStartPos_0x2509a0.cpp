#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ClosestStartPos
// Address: 0x2509a0 - 0x250b10
void ClosestStartPos_0x2509a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2509a0u;

    // 0x2509a0: 0x27bdff40
    ctx->pc = 0x2509a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2509a4: 0xffbf00a0
    ctx->pc = 0x2509a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2509a8: 0xffbe0090
    ctx->pc = 0x2509a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2509ac: 0xffb70080
    ctx->pc = 0x2509acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2509b0: 0xffb60070
    ctx->pc = 0x2509b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2509b4: 0xffb50060
    ctx->pc = 0x2509b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2509b8: 0xffb40050
    ctx->pc = 0x2509b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2509bc: 0xffb30040
    ctx->pc = 0x2509bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2509c0: 0xffb20030
    ctx->pc = 0x2509c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2509c4: 0xffb10020
    ctx->pc = 0x2509c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2509c8: 0xffb00010
    ctx->pc = 0x2509c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2509cc: 0xe7b500b8
    ctx->pc = 0x2509ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2509d0: 0xe7b400b0
    ctx->pc = 0x2509d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2509d4: 0x80982d
    ctx->pc = 0x2509d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2509d8: 0xa02d
    ctx->pc = 0x2509d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2509dc: 0x3c01bf80
    ctx->pc = 0x2509dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2509e0: 0x4481a000
    ctx->pc = 0x2509e0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2509e4: 0x902d
    ctx->pc = 0x2509e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2509e8: 0x241e000c
    ctx->pc = 0x2509e8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2509ec: 0x3c020033
    ctx->pc = 0x2509ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2509f0: 0x24574ac4
    ctx->pc = 0x2509f0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 19140));
    // 0x2509f4: 0x3c01c7c3
    ctx->pc = 0x2509f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51139 << 16));
    // 0x2509f8: 0x34215000
    ctx->pc = 0x2509f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x2509fc: 0x4481a800
    ctx->pc = 0x2509fcu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x250a00: 0x3c020034
    ctx->pc = 0x250a00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x250a04: 0x2456fb38
    ctx->pc = 0x250a04u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294966072));
    // 0x250a08: 0x3c020033
    ctx->pc = 0x250a08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x250a0c: 0x24554ac8
    ctx->pc = 0x250a0cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 19144));
    // 0x250a10: 0x25e8018
    ctx->pc = 0x250a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x250a14: 0x0
    ctx->pc = 0x250a14u;
    // NOP
label_250a18:
    // 0x250a18: 0x2178821
    ctx->pc = 0x250a18u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x250a1c: 0xc6200000
    ctx->pc = 0x250a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250a20: 0x46150036
    ctx->pc = 0x250a20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250a24: 0x0
    ctx->pc = 0x250a24u;
    // NOP
    // 0x250a28: 0x45030027
    ctx->pc = 0x250A28u;
    {
        const bool branch_taken_0x250a28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250a28) {
            ctx->pc = 0x250A2Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x250AC8u;
            goto label_250ac8;
        }
    }
    ctx->pc = 0x250A30u;
    // 0x250a30: 0x121080
    ctx->pc = 0x250a30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x250a34: 0x561021
    ctx->pc = 0x250a34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x250a38: 0xc09dd74
    ctx->pc = 0x250A38u;
    SET_GPR_U32(ctx, 31, 0x250A40u);
    ctx->pc = 0x250A3Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2775D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldOpen_0x2775d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250A40u; }
    }
    if (ctx->pc != 0x250A40u) { return; }
    ctx->pc = 0x250A40u;
    // 0x250a40: 0x10400020
    ctx->pc = 0x250A40u;
    {
        const bool branch_taken_0x250a40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x250A44u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x250a40) {
            ctx->pc = 0x250AC4u;
            goto label_250ac4;
        }
    }
    ctx->pc = 0x250A48u;
    // 0x250a48: 0x24634ac0
    ctx->pc = 0x250a48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19136));
    // 0x250a4c: 0x2031021
    ctx->pc = 0x250a4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x250a50: 0xc4430000
    ctx->pc = 0x250a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250a54: 0xc6600000
    ctx->pc = 0x250a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250a58: 0x460018c1
    ctx->pc = 0x250a58u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x250a5c: 0xe7a30000
    ctx->pc = 0x250a5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x250a60: 0xc6220000
    ctx->pc = 0x250a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250a64: 0xc6600004
    ctx->pc = 0x250a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250a68: 0x46001081
    ctx->pc = 0x250a68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x250a6c: 0xe7a20004
    ctx->pc = 0x250a6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x250a70: 0x2151021
    ctx->pc = 0x250a70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x250a74: 0xc4400000
    ctx->pc = 0x250a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250a78: 0xc6610008
    ctx->pc = 0x250a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250a7c: 0x46010001
    ctx->pc = 0x250a7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x250a80: 0xe7a00008
    ctx->pc = 0x250a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x250a84: 0x460318c2
    ctx->pc = 0x250a84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x250a88: 0x46021082
    ctx->pc = 0x250a88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x250a8c: 0x460218c0
    ctx->pc = 0x250a8cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x250a90: 0x46000002
    ctx->pc = 0x250a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x250a94: 0x46001880
    ctx->pc = 0x250a94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x250a98: 0x44800000
    ctx->pc = 0x250a98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x250a9c: 0x4600a034
    ctx->pc = 0x250a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250aa0: 0x0
    ctx->pc = 0x250aa0u;
    // NOP
    // 0x250aa4: 0x45030006
    ctx->pc = 0x250AA4u;
    {
        const bool branch_taken_0x250aa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250aa4) {
            ctx->pc = 0x250AA8u;
            ctx->f[20] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x250AC0u;
            goto label_250ac0;
        }
    }
    ctx->pc = 0x250AACu;
    // 0x250aac: 0x46141034
    ctx->pc = 0x250aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250ab0: 0x0
    ctx->pc = 0x250ab0u;
    // NOP
    // 0x250ab4: 0x45020004
    ctx->pc = 0x250AB4u;
    {
        const bool branch_taken_0x250ab4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250ab4) {
            ctx->pc = 0x250AB8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x250AC8u;
            goto label_250ac8;
        }
    }
    ctx->pc = 0x250ABCu;
    // 0x250abc: 0x46001506
    ctx->pc = 0x250abcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_250ac0:
    // 0x250ac0: 0x240a02d
    ctx->pc = 0x250ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_250ac4:
    // 0x250ac4: 0x26520001
    ctx->pc = 0x250ac4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_250ac8:
    // 0x250ac8: 0x2a42000e
    ctx->pc = 0x250ac8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 14));
    // 0x250acc: 0x1440ffd2
    ctx->pc = 0x250ACCu;
    {
        const bool branch_taken_0x250acc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x250AD0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x250acc) {
            ctx->pc = 0x250A18u;
            goto label_250a18;
        }
    }
    ctx->pc = 0x250AD4u;
    // 0x250ad4: 0x280102d
    ctx->pc = 0x250ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ad8: 0xdfbf00a0
    ctx->pc = 0x250ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x250adc: 0xdfbe0090
    ctx->pc = 0x250adcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x250ae0: 0xdfb70080
    ctx->pc = 0x250ae0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250ae4: 0xdfb60070
    ctx->pc = 0x250ae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250ae8: 0xdfb50060
    ctx->pc = 0x250ae8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250aec: 0xdfb40050
    ctx->pc = 0x250aecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250af0: 0xdfb30040
    ctx->pc = 0x250af0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250af4: 0xdfb20030
    ctx->pc = 0x250af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250af8: 0xdfb10020
    ctx->pc = 0x250af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250afc: 0xdfb00010
    ctx->pc = 0x250afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250b00: 0xc7b500b8
    ctx->pc = 0x250b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x250b04: 0xc7b400b0
    ctx->pc = 0x250b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250b08: 0x3e00008
    ctx->pc = 0x250B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250B0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250A18u: goto label_250a18;
            case 0x250AC0u: goto label_250ac0;
            case 0x250AC4u: goto label_250ac4;
            case 0x250AC8u: goto label_250ac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x250B10u;
}
