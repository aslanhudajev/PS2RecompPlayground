#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: update_class_attr
// Address: 0x2859b0 - 0x285e2c
void update_class_attr_0x2859b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2859b0u;

    // 0x2859b0: 0x27bdff10
    ctx->pc = 0x2859b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2859b4: 0xffbf00d0
    ctx->pc = 0x2859b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2859b8: 0xffbe00c0
    ctx->pc = 0x2859b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2859bc: 0xffb700b0
    ctx->pc = 0x2859bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2859c0: 0xffb600a0
    ctx->pc = 0x2859c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2859c4: 0xffb50090
    ctx->pc = 0x2859c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2859c8: 0xffb40080
    ctx->pc = 0x2859c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2859cc: 0xffb30070
    ctx->pc = 0x2859ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2859d0: 0xffb20060
    ctx->pc = 0x2859d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2859d4: 0xffb10050
    ctx->pc = 0x2859d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2859d8: 0xffb00040
    ctx->pc = 0x2859d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2859dc: 0xe7b400e0
    ctx->pc = 0x2859dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2859e0: 0x80a02d
    ctx->pc = 0x2859e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2859e4: 0x24032b00
    ctx->pc = 0x2859e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2859e8: 0x2831818
    ctx->pc = 0x2859e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2859ec: 0x3c020032
    ctx->pc = 0x2859ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2859f0: 0x24421bc0
    ctx->pc = 0x2859f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2859f4: 0x629021
    ctx->pc = 0x2859f4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2859f8: 0x8e45000c
    ctx->pc = 0x2859f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2859fc: 0xc093692
    ctx->pc = 0x2859FCu;
    SET_GPR_U32(ctx, 31, 0x285A04u);
    ctx->pc = 0x285A00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPlyrData_0x24da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A04u; }
    }
    if (ctx->pc != 0x285A04u) { return; }
    ctx->pc = 0x285A04u;
    // 0x285a04: 0x8e422ac0
    ctx->pc = 0x285a04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x285a08: 0x5c400004
    ctx->pc = 0x285A08u;
    {
        const bool branch_taken_0x285a08 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x285a08) {
            ctx->pc = 0x285A0Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
            ctx->pc = 0x285A1Cu;
            goto label_285a1c;
        }
    }
    ctx->pc = 0x285A10u;
    // 0x285a10: 0x24020001
    ctx->pc = 0x285a10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x285a14: 0xae422ac0
    ctx->pc = 0x285a14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10944), GPR_U32(ctx, 2));
    // 0x285a18: 0x8e4300fc
    ctx->pc = 0x285a18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
label_285a1c:
    // 0x285a1c: 0x24020002
    ctx->pc = 0x285a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x285a20: 0x146200f6
    ctx->pc = 0x285A20u;
    {
        const bool branch_taken_0x285a20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x285A24u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        if (branch_taken_0x285a20) {
            ctx->pc = 0x285DFCu;
            goto label_285dfc;
        }
    }
    ctx->pc = 0x285A28u;
    // 0x285a28: 0x8e432ad4
    ctx->pc = 0x285a28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 10964)));
    // 0x285a2c: 0x24020001
    ctx->pc = 0x285a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x285a30: 0x106200d6
    ctx->pc = 0x285A30u;
    {
        const bool branch_taken_0x285a30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x285A34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x285a30) {
            ctx->pc = 0x285D8Cu;
            goto label_285d8c;
        }
    }
    ctx->pc = 0x285A38u;
    // 0x285a38: 0x546200f1
    ctx->pc = 0x285A38u;
    {
        const bool branch_taken_0x285a38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x285a38) {
            ctx->pc = 0x285A3Cu;
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->pc = 0x285E00u;
            goto label_285e00;
        }
    }
    ctx->pc = 0x285A40u;
    // 0x285a40: 0xc0a11f8
    ctx->pc = 0x285A40u;
    SET_GPR_U32(ctx, 31, 0x285A48u);
    ctx->pc = 0x285A44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2847E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        useable_class_0x2847e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A48u; }
    }
    if (ctx->pc != 0x285A48u) { return; }
    ctx->pc = 0x285A48u;
    // 0x285a48: 0x104000eb
    ctx->pc = 0x285A48u;
    {
        const bool branch_taken_0x285a48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x285A4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x285a48) {
            ctx->pc = 0x285DF8u;
            goto label_285df8;
        }
    }
    ctx->pc = 0x285A50u;
    // 0x285a50: 0x8e430010
    ctx->pc = 0x285a50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x285a54: 0x5462000f
    ctx->pc = 0x285A54u;
    {
        const bool branch_taken_0x285a54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x285a54) {
            ctx->pc = 0x285A58u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->pc = 0x285A94u;
            goto label_285a94;
        }
    }
    ctx->pc = 0x285A5Cu;
    // 0x285a5c: 0xb02d
    ctx->pc = 0x285a5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a60: 0x902d
    ctx->pc = 0x285a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a64: 0x240303e7
    ctx->pc = 0x285a64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 999));
label_285a68:
    // 0x285a68: 0x121080
    ctx->pc = 0x285a68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x285a6c: 0x3a21021
    ctx->pc = 0x285a6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x285a70: 0xac430000
    ctx->pc = 0x285a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x285a74: 0x26520001
    ctx->pc = 0x285a74u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x285a78: 0x2a420004
    ctx->pc = 0x285a78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x285a7c: 0x1440fffa
    ctx->pc = 0x285A7Cu;
    {
        const bool branch_taken_0x285a7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x285a7c) {
            ctx->pc = 0x285A68u;
            goto label_285a68;
        }
    }
    ctx->pc = 0x285A84u;
    // 0x285a84: 0x24020063
    ctx->pc = 0x285a84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x285a88: 0xafa20030
    ctx->pc = 0x285a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x285a8c: 0x1000004b
    ctx->pc = 0x285A8Cu;
    {
        const bool branch_taken_0x285a8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x285A90u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x285a8c) {
            ctx->pc = 0x285BBCu;
            goto label_285bbc;
        }
    }
    ctx->pc = 0x285A94u;
label_285a94:
    // 0x285a94: 0x24030018
    ctx->pc = 0x285a94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x285a98: 0x431018
    ctx->pc = 0x285a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x285a9c: 0x244209ac
    ctx->pc = 0x285a9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2476));
    // 0x285aa0: 0x242b021
    ctx->pc = 0x285aa0u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x285aa4: 0xc08d20c
    ctx->pc = 0x285AA4u;
    SET_GPR_U32(ctx, 31, 0x285AACu);
    ctx->pc = 0x285AA8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->pc = 0x234830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpToLevel_0x234830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285AACu; }
    }
    if (ctx->pc != 0x285AACu) { return; }
    ctx->pc = 0x285AACu;
    // 0x285aac: 0xafa20030
    ctx->pc = 0x285aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x285ab0: 0x280202d
    ctx->pc = 0x285ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ab4: 0x8e450010
    ctx->pc = 0x285ab4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x285ab8: 0xc093692
    ctx->pc = 0x285AB8u;
    SET_GPR_U32(ctx, 31, 0x285AC0u);
    ctx->pc = 0x285ABCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPlyrData_0x24da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285AC0u; }
    }
    if (ctx->pc != 0x285AC0u) { return; }
    ctx->pc = 0x285AC0u;
    // 0x285ac0: 0x3c030033
    ctx->pc = 0x285ac0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x285ac4: 0x24634910
    ctx->pc = 0x285ac4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
    // 0x285ac8: 0x141080
    ctx->pc = 0x285ac8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
    // 0x285acc: 0x431021
    ctx->pc = 0x285accu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285ad0: 0x8c440000
    ctx->pc = 0x285ad0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285ad4: 0x8fa20030
    ctx->pc = 0x285ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285ad8: 0x2443ffff
    ctx->pc = 0x285ad8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x285adc: 0x31080
    ctx->pc = 0x285adcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x285ae0: 0x431021
    ctx->pc = 0x285ae0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285ae4: 0x44821000
    ctx->pc = 0x285ae4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x285ae8: 0x468010a0
    ctx->pc = 0x285ae8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x285aec: 0xc4800028
    ctx->pc = 0x285aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285af0: 0x46001000
    ctx->pc = 0x285af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x285af4: 0xc6c10008
    ctx->pc = 0x285af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285af8: 0x46010000
    ctx->pc = 0x285af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x285afc: 0x46000064
    ctx->pc = 0x285afcu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x285b00: 0xe7a10000
    ctx->pc = 0x285b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x285b04: 0xc4800030
    ctx->pc = 0x285b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285b08: 0x46001000
    ctx->pc = 0x285b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x285b0c: 0xc6c10014
    ctx->pc = 0x285b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285b10: 0x46010000
    ctx->pc = 0x285b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x285b14: 0x46000064
    ctx->pc = 0x285b14u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x285b18: 0xe7a10004
    ctx->pc = 0x285b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x285b1c: 0xc4800038
    ctx->pc = 0x285b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285b20: 0x46001000
    ctx->pc = 0x285b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x285b24: 0xc6c1000c
    ctx->pc = 0x285b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285b28: 0x46010000
    ctx->pc = 0x285b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x285b2c: 0x46000064
    ctx->pc = 0x285b2cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x285b30: 0xe7a10008
    ctx->pc = 0x285b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x285b34: 0xc4800040
    ctx->pc = 0x285b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285b38: 0x46001080
    ctx->pc = 0x285b38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x285b3c: 0xc6c00010
    ctx->pc = 0x285b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285b40: 0x46001080
    ctx->pc = 0x285b40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x285b44: 0x46001024
    ctx->pc = 0x285b44u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x285b48: 0xe7a0000c
    ctx->pc = 0x285b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x285b4c: 0x902d
    ctx->pc = 0x285b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b50: 0x240503e7
    ctx->pc = 0x285b50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 999));
    // 0x285b54: 0x121080
    ctx->pc = 0x285b54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_285b58:
    // 0x285b58: 0x3a22021
    ctx->pc = 0x285b58u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x285b5c: 0x8c820000
    ctx->pc = 0x285b5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x285b60: 0x284303e8
    ctx->pc = 0x285b60u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 1000));
    // 0x285b64: 0xa3100a
    ctx->pc = 0x285b64u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x285b68: 0xac820000
    ctx->pc = 0x285b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x285b6c: 0x26520001
    ctx->pc = 0x285b6cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x285b70: 0x2a420004
    ctx->pc = 0x285b70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x285b74: 0x1440fff8
    ctx->pc = 0x285B74u;
    {
        const bool branch_taken_0x285b74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x285B78u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x285b74) {
            ctx->pc = 0x285B58u;
            goto label_285b58;
        }
    }
    ctx->pc = 0x285B7Cu;
    // 0x285b7c: 0x202d
    ctx->pc = 0x285b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b80: 0xa82d
    ctx->pc = 0x285b80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b84: 0x902d
    ctx->pc = 0x285b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285b88: 0x121080
    ctx->pc = 0x285b88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x285b8c: 0x0
    ctx->pc = 0x285b8cu;
    // NOP
label_285b90:
    // 0x285b90: 0x3a21021
    ctx->pc = 0x285b90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x285b94: 0x8c430000
    ctx->pc = 0x285b94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285b98: 0x83102a
    ctx->pc = 0x285b98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x285b9c: 0x50400004
    ctx->pc = 0x285B9Cu;
    {
        const bool branch_taken_0x285b9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x285b9c) {
            ctx->pc = 0x285BA0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x285BB0u;
            goto label_285bb0;
        }
    }
    ctx->pc = 0x285BA4u;
    // 0x285ba4: 0x60202d
    ctx->pc = 0x285ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ba8: 0x240a82d
    ctx->pc = 0x285ba8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285bac: 0x26520001
    ctx->pc = 0x285bacu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_285bb0:
    // 0x285bb0: 0x2a420004
    ctx->pc = 0x285bb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x285bb4: 0x1440fff6
    ctx->pc = 0x285BB4u;
    {
        const bool branch_taken_0x285bb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x285BB8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x285bb4) {
            ctx->pc = 0x285B90u;
            goto label_285b90;
        }
    }
    ctx->pc = 0x285BBCu;
label_285bbc:
    // 0x285bbc: 0x3c020035
    ctx->pc = 0x285bbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285bc0: 0xc454a41c
    ctx->pc = 0x285bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x285bc4: 0x3c020035
    ctx->pc = 0x285bc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285bc8: 0x8c53a414
    ctx->pc = 0x285bc8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294943764)));
    // 0x285bcc: 0x3c030035
    ctx->pc = 0x285bccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x285bd0: 0x2463a2f0
    ctx->pc = 0x285bd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943472));
    // 0x285bd4: 0x141080
    ctx->pc = 0x285bd4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
    // 0x285bd8: 0x431021
    ctx->pc = 0x285bd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285bdc: 0x8c420000
    ctx->pc = 0x285bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285be0: 0x245e0051
    ctx->pc = 0x285be0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 81));
    // 0x285be4: 0x902d
    ctx->pc = 0x285be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285be8: 0x3c020035
    ctx->pc = 0x285be8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285bec: 0x2442a2f0
    ctx->pc = 0x285becu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943472));
    // 0x285bf0: 0x141880
    ctx->pc = 0x285bf0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
    // 0x285bf4: 0x62b821
    ctx->pc = 0x285bf4u;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285bf8: 0x240400a7
    ctx->pc = 0x285bf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 167));
    // 0x285bfc: 0x0
    ctx->pc = 0x285bfcu;
    // NOP
label_285c00:
    // 0x285c00: 0x240282d
    ctx->pc = 0x285c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c04: 0xc08065e
    ctx->pc = 0x285C04u;
    SET_GPR_U32(ctx, 31, 0x285C0Cu);
    ctx->pc = 0x285C08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C0Cu; }
    }
    if (ctx->pc != 0x285C0Cu) { return; }
    ctx->pc = 0x285C0Cu;
    // 0x285c0c: 0x40802d
    ctx->pc = 0x285c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c10: 0x200202d
    ctx->pc = 0x285c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c14: 0x24050006
    ctx->pc = 0x285c14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x285c18: 0xc080552
    ctx->pc = 0x285C18u;
    SET_GPR_U32(ctx, 31, 0x285C20u);
    ctx->pc = 0x285C1Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C20u; }
    }
    if (ctx->pc != 0x285C20u) { return; }
    ctx->pc = 0x285C20u;
    // 0x285c20: 0x16b20008
    ctx->pc = 0x285C20u;
    {
        const bool branch_taken_0x285c20 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 18));
        ctx->pc = 0x285C24u;
        SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        if (branch_taken_0x285c20) {
            ctx->pc = 0x285C44u;
            goto label_285c44;
        }
    }
    ctx->pc = 0x285C28u;
    // 0x285c28: 0x220202d
    ctx->pc = 0x285c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c2c: 0x2665fffe
    ctx->pc = 0x285c2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x285c30: 0x4600a306
    ctx->pc = 0x285c30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x285c34: 0xc080a9a
    ctx->pc = 0x285C34u;
    SET_GPR_U32(ctx, 31, 0x285C3Cu);
    ctx->pc = 0x285C38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C3Cu; }
    }
    if (ctx->pc != 0x285C3Cu) { return; }
    ctx->pc = 0x285C3Cu;
    // 0x285c3c: 0x1000000a
    ctx->pc = 0x285C3Cu;
    {
        const bool branch_taken_0x285c3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x285C40u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 0)));
        if (branch_taken_0x285c3c) {
            ctx->pc = 0x285C68u;
            goto label_285c68;
        }
    }
    ctx->pc = 0x285C44u;
label_285c44:
    // 0x285c44: 0x220202d
    ctx->pc = 0x285c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c48: 0x2665fffe
    ctx->pc = 0x285c48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x285c4c: 0x24060006
    ctx->pc = 0x285c4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x285c50: 0x3c0700ff
    ctx->pc = 0x285c50u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x285c54: 0x34e7ffff
    ctx->pc = 0x285c54u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x285c58: 0x4600a306
    ctx->pc = 0x285c58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x285c5c: 0xc080510
    ctx->pc = 0x285C5Cu;
    SET_GPR_U32(ctx, 31, 0x285C64u);
    ctx->pc = 0x285C60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C64u; }
    }
    if (ctx->pc != 0x285C64u) { return; }
    ctx->pc = 0x285C64u;
    // 0x285c64: 0x8ee30000
    ctx->pc = 0x285c64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_285c68:
    // 0x285c68: 0x3c040035
    ctx->pc = 0x285c68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x285c6c: 0x8c82a410
    ctx->pc = 0x285c6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294943760)));
    // 0x285c70: 0x628821
    ctx->pc = 0x285c70u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285c74: 0x3c05003b
    ctx->pc = 0x285c74u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x285c78: 0x121080
    ctx->pc = 0x285c78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x285c7c: 0x3a21021
    ctx->pc = 0x285c7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x285c80: 0x27a40010
    ctx->pc = 0x285c80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x285c84: 0x24a5d2a0
    ctx->pc = 0x285c84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955680));
    // 0x285c88: 0xc0b6252
    ctx->pc = 0x285C88u;
    SET_GPR_U32(ctx, 31, 0x285C90u);
    ctx->pc = 0x285C8Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C90u; }
    }
    if (ctx->pc != 0x285C90u) { return; }
    ctx->pc = 0x285C90u;
    // 0x285c90: 0x16b2000c
    ctx->pc = 0x285C90u;
    {
        const bool branch_taken_0x285c90 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 18));
        ctx->pc = 0x285C94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x285c90) {
            ctx->pc = 0x285CC4u;
            goto label_285cc4;
        }
    }
    ctx->pc = 0x285C98u;
    // 0x285c98: 0x3c04003b
    ctx->pc = 0x285c98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x285c9c: 0x2484d2a8
    ctx->pc = 0x285c9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955688));
    // 0x285ca0: 0xc0b1bb4
    ctx->pc = 0x285CA0u;
    SET_GPR_U32(ctx, 31, 0x285CA8u);
    ctx->pc = 0x285CA4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285CA8u; }
    }
    if (ctx->pc != 0x285CA8u) { return; }
    ctx->pc = 0x285CA8u;
    // 0x285ca8: 0x40202d
    ctx->pc = 0x285ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285cac: 0x2625fffa
    ctx->pc = 0x285cacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294967290));
    // 0x285cb0: 0x2666fffa
    ctx->pc = 0x285cb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 4294967290));
    // 0x285cb4: 0x24070044
    ctx->pc = 0x285cb4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 68));
    // 0x285cb8: 0xc0b0c6a
    ctx->pc = 0x285CB8u;
    SET_GPR_U32(ctx, 31, 0x285CC0u);
    ctx->pc = 0x285CBCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285CC0u; }
    }
    if (ctx->pc != 0x285CC0u) { return; }
    ctx->pc = 0x285CC0u;
    // 0x285cc0: 0x220202d
    ctx->pc = 0x285cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285cc4:
    // 0x285cc4: 0x260282d
    ctx->pc = 0x285cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285cc8: 0x3c020035
    ctx->pc = 0x285cc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285ccc: 0x8c46a418
    ctx->pc = 0x285cccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294943768)));
    // 0x285cd0: 0x3c0700ff
    ctx->pc = 0x285cd0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x285cd4: 0x34e7ffff
    ctx->pc = 0x285cd4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x285cd8: 0x4600a306
    ctx->pc = 0x285cd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x285cdc: 0xc080510
    ctx->pc = 0x285CDCu;
    SET_GPR_U32(ctx, 31, 0x285CE4u);
    ctx->pc = 0x285CE0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285CE4u; }
    }
    if (ctx->pc != 0x285CE4u) { return; }
    ctx->pc = 0x285CE4u;
    // 0x285ce4: 0x3c020035
    ctx->pc = 0x285ce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285ce8: 0x8c42a420
    ctx->pc = 0x285ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943776)));
    // 0x285cec: 0x2629821
    ctx->pc = 0x285cecu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x285cf0: 0x26520001
    ctx->pc = 0x285cf0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x285cf4: 0x2a420004
    ctx->pc = 0x285cf4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x285cf8: 0x1440ffc1
    ctx->pc = 0x285CF8u;
    {
        const bool branch_taken_0x285cf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x285CFCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 167));
        if (branch_taken_0x285cf8) {
            ctx->pc = 0x285C00u;
            goto label_285c00;
        }
    }
    ctx->pc = 0x285D00u;
    // 0x285d00: 0x3c030035
    ctx->pc = 0x285d00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x285d04: 0x2463a2f0
    ctx->pc = 0x285d04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943472));
    // 0x285d08: 0x141080
    ctx->pc = 0x285d08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
    // 0x285d0c: 0x431021
    ctx->pc = 0x285d0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285d10: 0x8c420000
    ctx->pc = 0x285d10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285d14: 0x24510040
    ctx->pc = 0x285d14u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 64));
    // 0x285d18: 0x118823
    ctx->pc = 0x285d18u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x285d1c: 0x3c020035
    ctx->pc = 0x285d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285d20: 0x12c0000a
    ctx->pc = 0x285D20u;
    {
        const bool branch_taken_0x285d20 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x285D24u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294943780)));
        if (branch_taken_0x285d20) {
            ctx->pc = 0x285D4Cu;
            goto label_285d4c;
        }
    }
    ctx->pc = 0x285D28u;
    // 0x285d28: 0x8ec20000
    ctx->pc = 0x285d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x285d2c: 0x18400007
    ctx->pc = 0x285D2Cu;
    {
        const bool branch_taken_0x285d2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x285D30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x285d2c) {
            ctx->pc = 0x285D4Cu;
            goto label_285d4c;
        }
    }
    ctx->pc = 0x285D34u;
    // 0x285d34: 0x3c05003b
    ctx->pc = 0x285d34u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x285d38: 0x24a5d2b8
    ctx->pc = 0x285d38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955704));
    // 0x285d3c: 0xc0b6252
    ctx->pc = 0x285D3Cu;
    SET_GPR_U32(ctx, 31, 0x285D44u);
    ctx->pc = 0x285D40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D44u; }
    }
    if (ctx->pc != 0x285D44u) { return; }
    ctx->pc = 0x285D44u;
    // 0x285d44: 0x10000006
    ctx->pc = 0x285D44u;
    {
        const bool branch_taken_0x285d44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x285D48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x285d44) {
            ctx->pc = 0x285D60u;
            goto label_285d60;
        }
    }
    ctx->pc = 0x285D4Cu;
label_285d4c:
    // 0x285d4c: 0x27a40010
    ctx->pc = 0x285d4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x285d50: 0x3c05003b
    ctx->pc = 0x285d50u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x285d54: 0xc0b6252
    ctx->pc = 0x285D54u;
    SET_GPR_U32(ctx, 31, 0x285D5Cu);
    ctx->pc = 0x285D58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955720));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D5Cu; }
    }
    if (ctx->pc != 0x285D5Cu) { return; }
    ctx->pc = 0x285D5Cu;
    // 0x285d5c: 0x3c020035
    ctx->pc = 0x285d5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_285d60:
    // 0x285d60: 0x3c030035
    ctx->pc = 0x285d60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x285d64: 0x220202d
    ctx->pc = 0x285d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d68: 0x260282d
    ctx->pc = 0x285d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d6c: 0x8c46a428
    ctx->pc = 0x285d6cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294943784)));
    // 0x285d70: 0x3c0700ff
    ctx->pc = 0x285d70u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x285d74: 0x34e7ffff
    ctx->pc = 0x285d74u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x285d78: 0xc46ca42c
    ctx->pc = 0x285d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294943788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x285d7c: 0xc080510
    ctx->pc = 0x285D7Cu;
    SET_GPR_U32(ctx, 31, 0x285D84u);
    ctx->pc = 0x285D80u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285D84u; }
    }
    if (ctx->pc != 0x285D84u) { return; }
    ctx->pc = 0x285D84u;
    // 0x285d84: 0x1000001d
    ctx->pc = 0x285D84u;
    {
        const bool branch_taken_0x285d84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x285D88u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        if (branch_taken_0x285d84) {
            ctx->pc = 0x285DFCu;
            goto label_285dfc;
        }
    }
    ctx->pc = 0x285D8Cu;
label_285d8c:
    // 0x285d8c: 0x3c030035
    ctx->pc = 0x285d8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x285d90: 0x2463a2f0
    ctx->pc = 0x285d90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943472));
    // 0x285d94: 0x141080
    ctx->pc = 0x285d94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
    // 0x285d98: 0x431021
    ctx->pc = 0x285d98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285d9c: 0x8c420000
    ctx->pc = 0x285d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285da0: 0x24510040
    ctx->pc = 0x285da0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 64));
    // 0x285da4: 0x118823
    ctx->pc = 0x285da4u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x285da8: 0x3c020035
    ctx->pc = 0x285da8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285dac: 0x8c53a424
    ctx->pc = 0x285dacu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294943780)));
    // 0x285db0: 0x27b00010
    ctx->pc = 0x285db0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x285db4: 0xc08d20c
    ctx->pc = 0x285DB4u;
    SET_GPR_U32(ctx, 31, 0x285DBCu);
    ctx->pc = 0x285DB8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 6684)));
    ctx->pc = 0x234830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpToLevel_0x234830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285DBCu; }
    }
    if (ctx->pc != 0x285DBCu) { return; }
    ctx->pc = 0x285DBCu;
    // 0x285dbc: 0x200202d
    ctx->pc = 0x285dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285dc0: 0x3c05003b
    ctx->pc = 0x285dc0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x285dc4: 0x24a5d2b8
    ctx->pc = 0x285dc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955704));
    // 0x285dc8: 0xc0b6252
    ctx->pc = 0x285DC8u;
    SET_GPR_U32(ctx, 31, 0x285DD0u);
    ctx->pc = 0x285DCCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285DD0u; }
    }
    if (ctx->pc != 0x285DD0u) { return; }
    ctx->pc = 0x285DD0u;
    // 0x285dd0: 0x3c020035
    ctx->pc = 0x285dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285dd4: 0x3c030035
    ctx->pc = 0x285dd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x285dd8: 0x220202d
    ctx->pc = 0x285dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ddc: 0x260282d
    ctx->pc = 0x285ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285de0: 0x8c46a428
    ctx->pc = 0x285de0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294943784)));
    // 0x285de4: 0x3c0700ff
    ctx->pc = 0x285de4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x285de8: 0x34e7ffff
    ctx->pc = 0x285de8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x285dec: 0xc46ca42c
    ctx->pc = 0x285decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294943788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x285df0: 0xc080510
    ctx->pc = 0x285DF0u;
    SET_GPR_U32(ctx, 31, 0x285DF8u);
    ctx->pc = 0x285DF4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285DF8u; }
    }
    if (ctx->pc != 0x285DF8u) { return; }
    ctx->pc = 0x285DF8u;
label_285df8:
    // 0x285df8: 0xdfbf00d0
    ctx->pc = 0x285df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_285dfc:
    // 0x285dfc: 0xdfbe00c0
    ctx->pc = 0x285dfcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_285e00:
    // 0x285e00: 0xdfb700b0
    ctx->pc = 0x285e00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x285e04: 0xdfb600a0
    ctx->pc = 0x285e04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x285e08: 0xdfb50090
    ctx->pc = 0x285e08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285e0c: 0xdfb40080
    ctx->pc = 0x285e0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x285e10: 0xdfb30070
    ctx->pc = 0x285e10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x285e14: 0xdfb20060
    ctx->pc = 0x285e14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285e18: 0xdfb10050
    ctx->pc = 0x285e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285e1c: 0xdfb00040
    ctx->pc = 0x285e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285e20: 0xc7b400e0
    ctx->pc = 0x285e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x285e24: 0x3e00008
    ctx->pc = 0x285E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285E28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285A1Cu: goto label_285a1c;
            case 0x285A68u: goto label_285a68;
            case 0x285A94u: goto label_285a94;
            case 0x285B58u: goto label_285b58;
            case 0x285B90u: goto label_285b90;
            case 0x285BB0u: goto label_285bb0;
            case 0x285BBCu: goto label_285bbc;
            case 0x285C00u: goto label_285c00;
            case 0x285C44u: goto label_285c44;
            case 0x285C68u: goto label_285c68;
            case 0x285CC4u: goto label_285cc4;
            case 0x285D4Cu: goto label_285d4c;
            case 0x285D60u: goto label_285d60;
            case 0x285D8Cu: goto label_285d8c;
            case 0x285DF8u: goto label_285df8;
            case 0x285DFCu: goto label_285dfc;
            case 0x285E00u: goto label_285e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285E2Cu;
}
