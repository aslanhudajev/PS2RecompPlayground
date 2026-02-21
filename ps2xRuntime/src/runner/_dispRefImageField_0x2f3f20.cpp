#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dispRefImageField
// Address: 0x2f3f20 - 0x2f40e0
void _dispRefImageField_0x2f3f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f3f20u;

    // 0x2f3f20: 0x27bdff70
    ctx->pc = 0x2f3f20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f3f24: 0x3c02003a
    ctx->pc = 0x2f3f24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f3f28: 0xffb50050
    ctx->pc = 0x2f3f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f3f2c: 0xffb20020
    ctx->pc = 0x2f3f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f3f30: 0x3c15003a
    ctx->pc = 0x2f3f30u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x2f3f34: 0xffb70070
    ctx->pc = 0x2f3f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2f3f38: 0x80902d
    ctx->pc = 0x2f3f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f3c: 0xffb60060
    ctx->pc = 0x2f3f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f3f40: 0xb82d
    ctx->pc = 0x2f3f40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f44: 0xffbf0080
    ctx->pc = 0x2f3f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f3f48: 0xa0b02d
    ctx->pc = 0x2f3f48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f4c: 0xffb40040
    ctx->pc = 0x2f3f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f3f50: 0xffb30030
    ctx->pc = 0x2f3f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f3f54: 0xffb00000
    ctx->pc = 0x2f3f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f3f58: 0x8ea33024
    ctx->pc = 0x2f3f58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 12324)));
    // 0x2f3f5c: 0xffb10010
    ctx->pc = 0x2f3f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f3f60: 0x8c4431ec
    ctx->pc = 0x2f3f60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12780)));
    // 0x2f3f64: 0x24020002
    ctx->pc = 0x2f3f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3f68: 0x14820005
    ctx->pc = 0x2F3F68u;
    {
        const bool branch_taken_0x2f3f68 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F3F6Cu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 64)));
        if (branch_taken_0x2f3f68) {
            ctx->pc = 0x2F3F80u;
            goto label_2f3f80;
        }
    }
    ctx->pc = 0x2F3F70u;
    // 0x2f3f70: 0x240982d
    ctx->pc = 0x2f3f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f74: 0x2c0a02d
    ctx->pc = 0x2f3f74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f78: 0x10000003
    ctx->pc = 0x2F3F78u;
    {
        const bool branch_taken_0x2f3f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3F7Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x2f3f78) {
            ctx->pc = 0x2F3F88u;
            goto label_2f3f88;
        }
    }
    ctx->pc = 0x2F3F80u;
label_2f3f80:
    // 0x2f3f80: 0x2c0982d
    ctx->pc = 0x2f3f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f84: 0x240a02d
    ctx->pc = 0x2f3f84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f3f88:
    // 0x2f3f88: 0x8ea63024
    ctx->pc = 0x2f3f88u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 12324)));
    // 0x2f3f8c: 0x260202d
    ctx->pc = 0x2f3f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f90: 0x24100001
    ctx->pc = 0x2f3f90u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3f94: 0x24c70020
    ctx->pc = 0x2f3f94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f3f98: 0x24c50010
    ctx->pc = 0x2f3f98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 16));
    // 0x2f3f9c: 0xc0bcf1c
    ctx->pc = 0x2F3F9Cu;
    SET_GPR_U32(ctx, 31, 0x2F3FA4u);
    ctx->pc = 0x2F3FA0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24));
    ctx->pc = 0x2F3C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x2f3c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3FA4u; }
    }
    if (ctx->pc != 0x2F3FA4u) { return; }
    ctx->pc = 0x2F3FA4u;
    // 0x2f3fa4: 0x8ea63024
    ctx->pc = 0x2f3fa4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 12324)));
    // 0x2f3fa8: 0x280202d
    ctx->pc = 0x2f3fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3fac: 0x8cc20010
    ctx->pc = 0x2f3facu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2f3fb0: 0x24c70038
    ctx->pc = 0x2f3fb0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 56));
    // 0x2f3fb4: 0x24c50028
    ctx->pc = 0x2f3fb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 40));
    // 0x2f3fb8: 0xfe300088
    ctx->pc = 0x2f3fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x2f3fbc: 0xae220080
    ctx->pc = 0x2f3fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x2f3fc0: 0xc0bcf1c
    ctx->pc = 0x2F3FC0u;
    SET_GPR_U32(ctx, 31, 0x2F3FC8u);
    ctx->pc = 0x2F3FC4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 48));
    ctx->pc = 0x2F3C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x2f3c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3FC8u; }
    }
    if (ctx->pc != 0x2F3FC8u) { return; }
    ctx->pc = 0x2F3FC8u;
    // 0x2f3fc8: 0x8ea63024
    ctx->pc = 0x2f3fc8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 12324)));
    // 0x2f3fcc: 0x2e0382d
    ctx->pc = 0x2f3fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3fd0: 0x240202d
    ctx->pc = 0x2f3fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3fd4: 0x8cc30028
    ctx->pc = 0x2f3fd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2f3fd8: 0xfe300088
    ctx->pc = 0x2f3fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x2f3fdc: 0xae230080
    ctx->pc = 0x2f3fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x2f3fe0: 0xdcc20020
    ctx->pc = 0x2f3fe0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2f3fe4: 0x8e65005c
    ctx->pc = 0x2f3fe4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2f3fe8: 0x471025
    ctx->pc = 0x2f3fe8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f3fec: 0xdcc30038
    ctx->pc = 0x2f3fecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x2f3ff0: 0xae2500cc
    ctx->pc = 0x2f3ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 5));
    // 0x2f3ff4: 0xfcc20020
    ctx->pc = 0x2f3ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x2f3ff8: 0x671825
    ctx->pc = 0x2f3ff8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2f3ffc: 0x8e650060
    ctx->pc = 0x2f3ffcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2f4000: 0xfcc30038
    ctx->pc = 0x2f4000u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 3));
    // 0x2f4004: 0xae2500d0
    ctx->pc = 0x2f4004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 5));
    // 0x2f4008: 0x8e620044
    ctx->pc = 0x2f4008u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2f400c: 0xae2200b4
    ctx->pc = 0x2f400cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x2f4010: 0x8e830048
    ctx->pc = 0x2f4010u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x2f4014: 0xae2300b8
    ctx->pc = 0x2f4014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x2f4018: 0x8e620050
    ctx->pc = 0x2f4018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2f401c: 0xae2200c0
    ctx->pc = 0x2f401cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x2f4020: 0x8e830054
    ctx->pc = 0x2f4020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x2f4024: 0xc0bce6a
    ctx->pc = 0x2F4024u;
    SET_GPR_U32(ctx, 31, 0x2F402Cu);
    ctx->pc = 0x2F4028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    ctx->pc = 0x2F39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _isOutSizeOK_0x2f39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F402Cu; }
    }
    if (ctx->pc != 0x2F402Cu) { return; }
    ctx->pc = 0x2F402Cu;
    // 0x2f402c: 0x10400021
    ctx->pc = 0x2F402Cu;
    {
        const bool branch_taken_0x2f402c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F4030u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f402c) {
            ctx->pc = 0x2F40B4u;
            goto label_2f40b4;
        }
    }
    ctx->pc = 0x2F4034u;
    // 0x2f4034: 0x8e430028
    ctx->pc = 0x2f4034u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2f4038: 0x1462001f
    ctx->pc = 0x2F4038u;
    {
        const bool branch_taken_0x2f4038 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F403Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2f4038) {
            ctx->pc = 0x2F40B8u;
            goto label_2f40b8;
        }
    }
    ctx->pc = 0x2F4040u;
    // 0x2f4040: 0x8ec20028
    ctx->pc = 0x2f4040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x2f4044: 0x1443001d
    ctx->pc = 0x2F4044u;
    {
        const bool branch_taken_0x2f4044 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2F4048u;
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2f4044) {
            ctx->pc = 0x2F40BCu;
            goto label_2f40bc;
        }
    }
    ctx->pc = 0x2F404Cu;
    // 0x2f404c: 0x8e420010
    ctx->pc = 0x2f404cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2f4050: 0x21040
    ctx->pc = 0x2f4050u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f4054: 0xae420010
    ctx->pc = 0x2f4054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2f4058: 0x8e2300b0
    ctx->pc = 0x2f4058u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2f405c: 0x10600005
    ctx->pc = 0x2F405Cu;
    {
        const bool branch_taken_0x2f405c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f405c) {
            ctx->pc = 0x2F4074u;
            goto label_2f4074;
        }
    }
    ctx->pc = 0x2F4064u;
    // 0x2f4064: 0xc0bd10c
    ctx->pc = 0x2F4064u;
    SET_GPR_U32(ctx, 31, 0x2F406Cu);
    ctx->pc = 0x2F4068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F4430u;
    {
        const uint32_t __entryPc = ctx->pc;
        _csc_storeRefImage_0x2f4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F406Cu; }
    }
    if (ctx->pc != 0x2F406Cu) { return; }
    ctx->pc = 0x2F406Cu;
    // 0x2f406c: 0x10000004
    ctx->pc = 0x2F406Cu;
    {
        const bool branch_taken_0x2f406c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F4070u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
        if (branch_taken_0x2f406c) {
            ctx->pc = 0x2F4080u;
            goto label_2f4080;
        }
    }
    ctx->pc = 0x2F4074u;
label_2f4074:
    // 0x2f4074: 0xc0bce92
    ctx->pc = 0x2F4074u;
    SET_GPR_U32(ctx, 31, 0x2F407Cu);
    ctx->pc = 0x2F4078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F3A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _cpr8_0x2f3a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F407Cu; }
    }
    if (ctx->pc != 0x2F407Cu) { return; }
    ctx->pc = 0x2F407Cu;
    // 0x2f407c: 0x8e420010
    ctx->pc = 0x2f407cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2f4080:
    // 0x2f4080: 0xdfbf0080
    ctx->pc = 0x2f4080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f4084: 0x21043
    ctx->pc = 0x2f4084u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f4088: 0xdfb70070
    ctx->pc = 0x2f4088u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f408c: 0xae420010
    ctx->pc = 0x2f408cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2f4090: 0xdfb60060
    ctx->pc = 0x2f4090u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f4094: 0xdfb50050
    ctx->pc = 0x2f4094u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f4098: 0xdfb40040
    ctx->pc = 0x2f4098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f409c: 0xdfb30030
    ctx->pc = 0x2f409cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f40a0: 0xdfb20020
    ctx->pc = 0x2f40a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f40a4: 0xdfb10010
    ctx->pc = 0x2f40a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f40a8: 0xdfb00000
    ctx->pc = 0x2f40a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f40ac: 0x80bcf0e
    ctx->pc = 0x2F40ACu;
    ctx->pc = 0x2F40B0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x2F3C38u;
    _markOutput_0x2f3c38(rdram, ctx, runtime); return;
    ctx->pc = 0x2F40B4u;
label_2f40b4:
    // 0x2f40b4: 0xdfbf0080
    ctx->pc = 0x2f40b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2f40b8:
    // 0x2f40b8: 0xdfb70070
    ctx->pc = 0x2f40b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f40bc:
    // 0x2f40bc: 0xdfb60060
    ctx->pc = 0x2f40bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f40c0: 0xdfb50050
    ctx->pc = 0x2f40c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f40c4: 0xdfb40040
    ctx->pc = 0x2f40c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f40c8: 0xdfb30030
    ctx->pc = 0x2f40c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f40cc: 0xdfb20020
    ctx->pc = 0x2f40ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f40d0: 0xdfb10010
    ctx->pc = 0x2f40d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f40d4: 0xdfb00000
    ctx->pc = 0x2f40d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f40d8: 0x3e00008
    ctx->pc = 0x2F40D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F40DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F3F80u: goto label_2f3f80;
            case 0x2F3F88u: goto label_2f3f88;
            case 0x2F4074u: goto label_2f4074;
            case 0x2F4080u: goto label_2f4080;
            case 0x2F40B4u: goto label_2f40b4;
            case 0x2F40B8u: goto label_2f40b8;
            case 0x2F40BCu: goto label_2f40bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F40E0u;
}
