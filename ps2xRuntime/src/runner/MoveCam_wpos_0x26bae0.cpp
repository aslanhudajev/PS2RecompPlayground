#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_wpos
// Address: 0x26bae0 - 0x26bcbc
void MoveCam_wpos_0x26bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26bae0u;

    // 0x26bae0: 0x27bdffd0
    ctx->pc = 0x26bae0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26bae4: 0xffbf0010
    ctx->pc = 0x26bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bae8: 0xffb00000
    ctx->pc = 0x26bae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26baec: 0xe7b50028
    ctx->pc = 0x26baecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26baf0: 0xe7b40020
    ctx->pc = 0x26baf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26baf4: 0x240301a0
    ctx->pc = 0x26baf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26baf8: 0x831818
    ctx->pc = 0x26baf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26bafc: 0x3c020034
    ctx->pc = 0x26bafcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26bb00: 0x2442eb60
    ctx->pc = 0x26bb00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26bb04: 0x14800006
    ctx->pc = 0x26BB04u;
    {
        const bool branch_taken_0x26bb04 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x26BB08u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x26bb04) {
            ctx->pc = 0x26BB20u;
            goto label_26bb20;
        }
    }
    ctx->pc = 0x26BB0Cu;
    // 0x26bb0c: 0x3c020031
    ctx->pc = 0x26bb0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26bb10: 0x8c430018
    ctx->pc = 0x26bb10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26bb14: 0x34028008
    ctx->pc = 0x26bb14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x26bb18: 0x1462000a
    ctx->pc = 0x26BB18u;
    {
        const bool branch_taken_0x26bb18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26BB1Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x26bb18) {
            ctx->pc = 0x26BB44u;
            goto label_26bb44;
        }
    }
    ctx->pc = 0x26BB20u;
label_26bb20:
    // 0x26bb20: 0x24020001
    ctx->pc = 0x26bb20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bb24: 0x14820060
    ctx->pc = 0x26BB24u;
    {
        const bool branch_taken_0x26bb24 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x26BB28u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26bb24) {
            ctx->pc = 0x26BCA8u;
            goto label_26bca8;
        }
    }
    ctx->pc = 0x26BB2Cu;
    // 0x26bb2c: 0x3c020031
    ctx->pc = 0x26bb2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26bb30: 0x8c430018
    ctx->pc = 0x26bb30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26bb34: 0x34028008
    ctx->pc = 0x26bb34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x26bb38: 0x5462005c
    ctx->pc = 0x26BB38u;
    {
        const bool branch_taken_0x26bb38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x26bb38) {
            ctx->pc = 0x26BB3Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x26BCACu;
            goto label_26bcac;
        }
    }
    ctx->pc = 0x26BB40u;
    // 0x26bb40: 0x3c030031
    ctx->pc = 0x26bb40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_26bb44:
    // 0x26bb44: 0x8c62ffbc
    ctx->pc = 0x26bb44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26bb48: 0x4400005
    ctx->pc = 0x26BB48u;
    {
        const bool branch_taken_0x26bb48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26BB4Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26bb48) {
            ctx->pc = 0x26BB60u;
            goto label_26bb60;
        }
    }
    ctx->pc = 0x26BB50u;
    // 0x26bb50: 0x44820000
    ctx->pc = 0x26bb50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x26bb54: 0x46800020
    ctx->pc = 0x26bb54u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26bb58: 0x10000009
    ctx->pc = 0x26BB58u;
    {
        const bool branch_taken_0x26bb58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BB5Cu;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x26bb58) {
            ctx->pc = 0x26BB80u;
            goto label_26bb80;
        }
    }
    ctx->pc = 0x26BB60u;
label_26bb60:
    // 0x26bb60: 0x8c820000
    ctx->pc = 0x26bb60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26bb64: 0x30430001
    ctx->pc = 0x26bb64u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26bb68: 0x21042
    ctx->pc = 0x26bb68u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26bb6c: 0x621825
    ctx->pc = 0x26bb6cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26bb70: 0x44830000
    ctx->pc = 0x26bb70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x26bb74: 0x46800020
    ctx->pc = 0x26bb74u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x26bb78: 0x46000000
    ctx->pc = 0x26bb78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x26bb7c: 0x46000506
    ctx->pc = 0x26bb7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_26bb80:
    // 0x26bb80: 0x3c020031
    ctx->pc = 0x26bb80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26bb84: 0x8c421b28
    ctx->pc = 0x26bb84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x26bb88: 0x3c030200
    ctx->pc = 0x26bb88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x26bb8c: 0x431024
    ctx->pc = 0x26bb8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26bb90: 0x14400005
    ctx->pc = 0x26BB90u;
    {
        const bool branch_taken_0x26bb90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26bb90) {
            ctx->pc = 0x26BBA8u;
            goto label_26bba8;
        }
    }
    ctx->pc = 0x26BB98u;
    // 0x26bb98: 0x3c013dcc
    ctx->pc = 0x26bb98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x26bb9c: 0x3421cccd
    ctx->pc = 0x26bb9cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26bba0: 0x44810000
    ctx->pc = 0x26bba0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26bba4: 0x4600a502
    ctx->pc = 0x26bba4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_26bba8:
    // 0x26bba8: 0xc0b9e4a
    ctx->pc = 0x26BBA8u;
    SET_GPR_U32(ctx, 31, 0x26BBB0u);
    ctx->pc = 0x26BBACu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BBB0u; }
    }
    if (ctx->pc != 0x26BBB0u) { return; }
    ctx->pc = 0x26BBB0u;
    // 0x26bbb0: 0x4600a542
    ctx->pc = 0x26bbb0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26bbb4: 0xc0b9dce
    ctx->pc = 0x26BBB4u;
    SET_GPR_U32(ctx, 31, 0x26BBBCu);
    ctx->pc = 0x26BBB8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BBBCu; }
    }
    if (ctx->pc != 0x26BBBCu) { return; }
    ctx->pc = 0x26BBBCu;
    // 0x26bbbc: 0xae0000a0
    ctx->pc = 0x26bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x26bbc0: 0xae0000a4
    ctx->pc = 0x26bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x26bbc4: 0xae0000a8
    ctx->pc = 0x26bbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x26bbc8: 0x3c020031
    ctx->pc = 0x26bbc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26bbcc: 0x8c421b28
    ctx->pc = 0x26bbccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x26bbd0: 0x3042000c
    ctx->pc = 0x26bbd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 12));
    // 0x26bbd4: 0x10400007
    ctx->pc = 0x26BBD4u;
    {
        const bool branch_taken_0x26bbd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BBD8u;
        ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x26bbd4) {
            ctx->pc = 0x26BBF4u;
            goto label_26bbf4;
        }
    }
    ctx->pc = 0x26BBDCu;
    // 0x26bbdc: 0xc6000090
    ctx->pc = 0x26bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bbe0: 0x4600a000
    ctx->pc = 0x26bbe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x26bbe4: 0xe6000090
    ctx->pc = 0x26bbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x26bbe8: 0xc60000a0
    ctx->pc = 0x26bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bbec: 0x4600a000
    ctx->pc = 0x26bbecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x26bbf0: 0xe60000a0
    ctx->pc = 0x26bbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_26bbf4:
    // 0x26bbf4: 0x3c020031
    ctx->pc = 0x26bbf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26bbf8: 0x8c421b28
    ctx->pc = 0x26bbf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x26bbfc: 0x30420003
    ctx->pc = 0x26bbfcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x26bc00: 0x10400007
    ctx->pc = 0x26BC00u;
    {
        const bool branch_taken_0x26bc00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BC04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26bc00) {
            ctx->pc = 0x26BC20u;
            goto label_26bc20;
        }
    }
    ctx->pc = 0x26BC08u;
    // 0x26bc08: 0xc6000090
    ctx->pc = 0x26bc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bc0c: 0x46140001
    ctx->pc = 0x26bc0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x26bc10: 0xe6000090
    ctx->pc = 0x26bc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x26bc14: 0xc60000a0
    ctx->pc = 0x26bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bc18: 0x46140001
    ctx->pc = 0x26bc18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x26bc1c: 0xe60000a0
    ctx->pc = 0x26bc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_26bc20:
    // 0x26bc20: 0x8c421b28
    ctx->pc = 0x26bc20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x26bc24: 0x30420030
    ctx->pc = 0x26bc24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 48));
    // 0x26bc28: 0x10400007
    ctx->pc = 0x26BC28u;
    {
        const bool branch_taken_0x26bc28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BC2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26bc28) {
            ctx->pc = 0x26BC48u;
            goto label_26bc48;
        }
    }
    ctx->pc = 0x26BC30u;
    // 0x26bc30: 0xc6000070
    ctx->pc = 0x26bc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bc34: 0x46150001
    ctx->pc = 0x26bc34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x26bc38: 0xe6000070
    ctx->pc = 0x26bc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26bc3c: 0xc6000078
    ctx->pc = 0x26bc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bc40: 0x46010001
    ctx->pc = 0x26bc40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26bc44: 0xe6000078
    ctx->pc = 0x26bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_26bc48:
    // 0x26bc48: 0x8c421b28
    ctx->pc = 0x26bc48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x26bc4c: 0x304200c0
    ctx->pc = 0x26bc4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
    // 0x26bc50: 0x10400007
    ctx->pc = 0x26BC50u;
    {
        const bool branch_taken_0x26bc50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BC54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26bc50) {
            ctx->pc = 0x26BC70u;
            goto label_26bc70;
        }
    }
    ctx->pc = 0x26BC58u;
    // 0x26bc58: 0xc6000070
    ctx->pc = 0x26bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bc5c: 0x4600a800
    ctx->pc = 0x26bc5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x26bc60: 0xe6000070
    ctx->pc = 0x26bc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26bc64: 0xc6000078
    ctx->pc = 0x26bc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bc68: 0x46000800
    ctx->pc = 0x26bc68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26bc6c: 0xe6000078
    ctx->pc = 0x26bc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_26bc70:
    // 0x26bc70: 0x8c421b2c
    ctx->pc = 0x26bc70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6956)));
    // 0x26bc74: 0x30420030
    ctx->pc = 0x26bc74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 48));
    // 0x26bc78: 0x10400004
    ctx->pc = 0x26BC78u;
    {
        const bool branch_taken_0x26bc78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BC7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26bc78) {
            ctx->pc = 0x26BC8Cu;
            goto label_26bc8c;
        }
    }
    ctx->pc = 0x26BC80u;
    // 0x26bc80: 0xc6000074
    ctx->pc = 0x26bc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bc84: 0x4600a000
    ctx->pc = 0x26bc84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x26bc88: 0xe6000074
    ctx->pc = 0x26bc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_26bc8c:
    // 0x26bc8c: 0x8c421b2c
    ctx->pc = 0x26bc8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6956)));
    // 0x26bc90: 0x304200c0
    ctx->pc = 0x26bc90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
    // 0x26bc94: 0x10400004
    ctx->pc = 0x26BC94u;
    {
        const bool branch_taken_0x26bc94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BC98u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26bc94) {
            ctx->pc = 0x26BCA8u;
            goto label_26bca8;
        }
    }
    ctx->pc = 0x26BC9Cu;
    // 0x26bc9c: 0xc6000074
    ctx->pc = 0x26bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bca0: 0x46140001
    ctx->pc = 0x26bca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x26bca4: 0xe6000074
    ctx->pc = 0x26bca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_26bca8:
    // 0x26bca8: 0xdfb00000
    ctx->pc = 0x26bca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26bcac:
    // 0x26bcac: 0xc7b50028
    ctx->pc = 0x26bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26bcb0: 0xc7b40020
    ctx->pc = 0x26bcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26bcb4: 0x3e00008
    ctx->pc = 0x26BCB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BCB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26BB20u: goto label_26bb20;
            case 0x26BB44u: goto label_26bb44;
            case 0x26BB60u: goto label_26bb60;
            case 0x26BB80u: goto label_26bb80;
            case 0x26BBA8u: goto label_26bba8;
            case 0x26BBF4u: goto label_26bbf4;
            case 0x26BC20u: goto label_26bc20;
            case 0x26BC48u: goto label_26bc48;
            case 0x26BC70u: goto label_26bc70;
            case 0x26BC8Cu: goto label_26bc8c;
            case 0x26BCA8u: goto label_26bca8;
            case 0x26BCACu: goto label_26bcac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26BCBCu;
}
