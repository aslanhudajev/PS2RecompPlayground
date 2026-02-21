#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerLevelSpeechStart
// Address: 0x274a48 - 0x274c04
void SumnerLevelSpeechStart_0x274a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274a48u;

    // 0x274a48: 0x27bdff60
    ctx->pc = 0x274a48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x274a4c: 0xffbf0090
    ctx->pc = 0x274a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x274a50: 0xffbe0080
    ctx->pc = 0x274a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x274a54: 0xffb70070
    ctx->pc = 0x274a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x274a58: 0xffb60060
    ctx->pc = 0x274a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x274a5c: 0xffb50050
    ctx->pc = 0x274a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x274a60: 0xffb40040
    ctx->pc = 0x274a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x274a64: 0xffb30030
    ctx->pc = 0x274a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x274a68: 0xffb20020
    ctx->pc = 0x274a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x274a6c: 0xffb10010
    ctx->pc = 0x274a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x274a70: 0xffb00000
    ctx->pc = 0x274a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274a74: 0x3c020034
    ctx->pc = 0x274a74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274a78: 0x8c42fbd4
    ctx->pc = 0x274a78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966228)));
    // 0x274a7c: 0x4400046
    ctx->pc = 0x274A7Cu;
    {
        const bool branch_taken_0x274a7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x274A80u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274a7c) {
            ctx->pc = 0x274B98u;
            goto label_274b98;
        }
    }
    ctx->pc = 0x274A84u;
    // 0x274a84: 0x3c020034
    ctx->pc = 0x274a84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274a88: 0xc441fbc0
    ctx->pc = 0x274a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274a8c: 0x44800000
    ctx->pc = 0x274a8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x274a90: 0x46010034
    ctx->pc = 0x274a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274a94: 0x0
    ctx->pc = 0x274a94u;
    // NOP
    // 0x274a98: 0x4501004e
    ctx->pc = 0x274A98u;
    {
        const bool branch_taken_0x274a98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x274A9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274a98) {
            ctx->pc = 0x274BD4u;
            goto label_274bd4;
        }
    }
    ctx->pc = 0x274AA0u;
    // 0x274aa0: 0xa02d
    ctx->pc = 0x274aa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274aa4: 0x3c020032
    ctx->pc = 0x274aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x274aa8: 0x24511bc0
    ctx->pc = 0x274aa8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x274aac: 0x3c02003c
    ctx->pc = 0x274aacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x274ab0: 0x24573a60
    ctx->pc = 0x274ab0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 14944));
    // 0x274ab4: 0x3c1e0032
    ctx->pc = 0x274ab4u;
    SET_GPR_U32(ctx, 30, ((uint32_t)50 << 16));
    // 0x274ab8: 0x24160018
    ctx->pc = 0x274ab8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 24));
    // 0x274abc: 0x2413000a
    ctx->pc = 0x274abcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 10));
label_274ac0:
    // 0x274ac0: 0x141080
    ctx->pc = 0x274ac0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
    // 0x274ac4: 0x579021
    ctx->pc = 0x274ac4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x274ac8: 0xae400000
    ctx->pc = 0x274ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x274acc: 0x8e2200fc
    ctx->pc = 0x274accu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x274ad0: 0x1040002b
    ctx->pc = 0x274AD0u;
    {
        const bool branch_taken_0x274ad0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274AD4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 5440)));
        if (branch_taken_0x274ad0) {
            ctx->pc = 0x274B80u;
            goto label_274b80;
        }
    }
    ctx->pc = 0x274AD8u;
    // 0x274ad8: 0x8e230104
    ctx->pc = 0x274ad8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x274adc: 0x50620029
    ctx->pc = 0x274ADCu;
    {
        const bool branch_taken_0x274adc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x274adc) {
            ctx->pc = 0x274AE0u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x274B84u;
            goto label_274b84;
        }
    }
    ctx->pc = 0x274AE4u;
    // 0x274ae4: 0x8e22000c
    ctx->pc = 0x274ae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x274ae8: 0x561818
    ctx->pc = 0x274ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x274aec: 0x711021
    ctx->pc = 0x274aecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x274af0: 0xc08d20c
    ctx->pc = 0x274AF0u;
    SET_GPR_U32(ctx, 31, 0x274AF8u);
    ctx->pc = 0x274AF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6712)));
    ctx->pc = 0x234830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpToLevel_0x234830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274AF8u; }
    }
    if (ctx->pc != 0x274AF8u) { return; }
    ctx->pc = 0x274AF8u;
    // 0x274af8: 0x40802d
    ctx->pc = 0x274af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274afc: 0xc08d20c
    ctx->pc = 0x274AFCu;
    SET_GPR_U32(ctx, 31, 0x274B04u);
    ctx->pc = 0x274B00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 6684)));
    ctx->pc = 0x234830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpToLevel_0x234830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B04u; }
    }
    if (ctx->pc != 0x274B04u) { return; }
    ctx->pc = 0x274B04u;
    // 0x274b04: 0x40202d
    ctx->pc = 0x274b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b08: 0x28820063
    ctx->pc = 0x274b08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 99));
    // 0x274b0c: 0x54400006
    ctx->pc = 0x274B0Cu;
    {
        const bool branch_taken_0x274b0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x274b0c) {
            ctx->pc = 0x274B10u;
            { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
            ctx->pc = 0x274B28u;
            goto label_274b28;
        }
    }
    ctx->pc = 0x274B14u;
    // 0x274b14: 0x2a020063
    ctx->pc = 0x274b14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 99));
    // 0x274b18: 0x50400003
    ctx->pc = 0x274B18u;
    {
        const bool branch_taken_0x274b18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x274b18) {
            ctx->pc = 0x274B1Cu;
            { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
            ctx->pc = 0x274B28u;
            goto label_274b28;
        }
    }
    ctx->pc = 0x274B20u;
    // 0x274b20: 0x1000000c
    ctx->pc = 0x274B20u;
    {
        const bool branch_taken_0x274b20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274B24u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x274b20) {
            ctx->pc = 0x274B54u;
            goto label_274b54;
        }
    }
    ctx->pc = 0x274B28u;
label_274b28:
    // 0x274b28: 0x1812
    ctx->pc = 0x274b28u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x274b2c: 0x52600001
    ctx->pc = 0x274B2Cu;
    {
        const bool branch_taken_0x274b2c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x274b2c) {
            ctx->pc = 0x274B30u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x274B34u;
            goto label_274b34;
        }
    }
    ctx->pc = 0x274B34u;
label_274b34:
    // 0x274b34: 0x93001a
    ctx->pc = 0x274b34u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x274b38: 0x1012
    ctx->pc = 0x274b38u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x274b3c: 0x52600001
    ctx->pc = 0x274B3Cu;
    {
        const bool branch_taken_0x274b3c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x274b3c) {
            ctx->pc = 0x274B40u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x274B44u;
            goto label_274b44;
        }
    }
    ctx->pc = 0x274B44u;
label_274b44:
    // 0x274b44: 0x10620004
    ctx->pc = 0x274B44u;
    {
        const bool branch_taken_0x274b44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x274B48u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x274b44) {
            ctx->pc = 0x274B58u;
            goto label_274b58;
        }
    }
    ctx->pc = 0x274B4Cu;
    // 0x274b4c: 0x571021
    ctx->pc = 0x274b4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x274b50: 0xac440000
    ctx->pc = 0x274b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_274b54:
    // 0x274b54: 0x26b50001
    ctx->pc = 0x274b54u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_274b58:
    // 0x274b58: 0x8e22000c
    ctx->pc = 0x274b58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x274b5c: 0x561818
    ctx->pc = 0x274b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x274b60: 0x711021
    ctx->pc = 0x274b60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x274b64: 0x8e231a1c
    ctx->pc = 0x274b64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 6684)));
    // 0x274b68: 0xac431a38
    ctx->pc = 0x274b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6712), GPR_U32(ctx, 3));
    // 0x274b6c: 0x8e22000c
    ctx->pc = 0x274b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x274b70: 0x561818
    ctx->pc = 0x274b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x274b74: 0x711021
    ctx->pc = 0x274b74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x274b78: 0x8e231a1c
    ctx->pc = 0x274b78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 6684)));
    // 0x274b7c: 0xac4309ac
    ctx->pc = 0x274b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2476), GPR_U32(ctx, 3));
label_274b80:
    // 0x274b80: 0x26940001
    ctx->pc = 0x274b80u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_274b84:
    // 0x274b84: 0x2a820004
    ctx->pc = 0x274b84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
    // 0x274b88: 0x1440ffcd
    ctx->pc = 0x274B88u;
    {
        const bool branch_taken_0x274b88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x274B8Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x274b88) {
            ctx->pc = 0x274AC0u;
            goto label_274ac0;
        }
    }
    ctx->pc = 0x274B90u;
    // 0x274b90: 0x16a00003
    ctx->pc = 0x274B90u;
    {
        const bool branch_taken_0x274b90 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x274b90) {
            ctx->pc = 0x274BA0u;
            goto label_274ba0;
        }
    }
    ctx->pc = 0x274B98u;
label_274b98:
    // 0x274b98: 0x1000000e
    ctx->pc = 0x274B98u;
    {
        const bool branch_taken_0x274b98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274B9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274b98) {
            ctx->pc = 0x274BD4u;
            goto label_274bd4;
        }
    }
    ctx->pc = 0x274BA0u;
label_274ba0:
    // 0x274ba0: 0xc09d236
    ctx->pc = 0x274BA0u;
    SET_GPR_U32(ctx, 31, 0x274BA8u);
    ctx->pc = 0x2748D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerGhostStart_0x2748d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274BA8u; }
    }
    if (ctx->pc != 0x274BA8u) { return; }
    ctx->pc = 0x274BA8u;
    // 0x274ba8: 0x3c020034
    ctx->pc = 0x274ba8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274bac: 0x3c013f00
    ctx->pc = 0x274bacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x274bb0: 0x44810000
    ctx->pc = 0x274bb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x274bb4: 0xe440fbc0
    ctx->pc = 0x274bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966208), bits); }
    // 0x274bb8: 0x3c020034
    ctx->pc = 0x274bb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274bbc: 0xc081776
    ctx->pc = 0x274BBCu;
    SET_GPR_U32(ctx, 31, 0x274BC4u);
    ctx->pc = 0x274BC0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966216), GPR_U32(ctx, 0));
    ctx->pc = 0x205DD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisablePlayerControls_0x205dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274BC4u; }
    }
    if (ctx->pc != 0x274BC4u) { return; }
    ctx->pc = 0x274BC4u;
    // 0x274bc4: 0x3c020034
    ctx->pc = 0x274bc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274bc8: 0xc099576
    ctx->pc = 0x274BC8u;
    SET_GPR_U32(ctx, 31, 0x274BD0u);
    ctx->pc = 0x274BCCu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966488), GPR_U32(ctx, 0));
    ctx->pc = 0x2655D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CaptionTextReset_0x2655d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274BD0u; }
    }
    if (ctx->pc != 0x274BD0u) { return; }
    ctx->pc = 0x274BD0u;
    // 0x274bd0: 0x2a0102d
    ctx->pc = 0x274bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_274bd4:
    // 0x274bd4: 0xdfbf0090
    ctx->pc = 0x274bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274bd8: 0xdfbe0080
    ctx->pc = 0x274bd8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x274bdc: 0xdfb70070
    ctx->pc = 0x274bdcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x274be0: 0xdfb60060
    ctx->pc = 0x274be0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274be4: 0xdfb50050
    ctx->pc = 0x274be4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274be8: 0xdfb40040
    ctx->pc = 0x274be8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274bec: 0xdfb30030
    ctx->pc = 0x274becu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274bf0: 0xdfb20020
    ctx->pc = 0x274bf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274bf4: 0xdfb10010
    ctx->pc = 0x274bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274bf8: 0xdfb00000
    ctx->pc = 0x274bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274bfc: 0x3e00008
    ctx->pc = 0x274BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274C00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274AC0u: goto label_274ac0;
            case 0x274B28u: goto label_274b28;
            case 0x274B34u: goto label_274b34;
            case 0x274B44u: goto label_274b44;
            case 0x274B54u: goto label_274b54;
            case 0x274B58u: goto label_274b58;
            case 0x274B80u: goto label_274b80;
            case 0x274B84u: goto label_274b84;
            case 0x274B98u: goto label_274b98;
            case 0x274BA0u: goto label_274ba0;
            case 0x274BD4u: goto label_274bd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x274C04u;
}
