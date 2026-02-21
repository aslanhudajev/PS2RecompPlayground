#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: joyReadPad
// Address: 0x205f30 - 0x2063ac
void joyReadPad_0x205f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x205f30u;

    // 0x205f30: 0x27bdffb0
    ctx->pc = 0x205f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x205f34: 0xffbf0040
    ctx->pc = 0x205f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x205f38: 0xffb10030
    ctx->pc = 0x205f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x205f3c: 0xffb00020
    ctx->pc = 0x205f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x205f40: 0x80802d
    ctx->pc = 0x205f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f44: 0xa0882d
    ctx->pc = 0x205f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f48: 0x26030003
    ctx->pc = 0x205f48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 3));
    // 0x205f4c: 0x2402ffff
    ctx->pc = 0x205f4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x205f50: 0x50102a
    ctx->pc = 0x205f50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x205f54: 0x202180b
    ctx->pc = 0x205f54u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 16));
    // 0x205f58: 0x33083
    ctx->pc = 0x205f58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x205f5c: 0x3c03003c
    ctx->pc = 0x205f5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x205f60: 0x2463bda0
    ctx->pc = 0x205f60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950304));
    // 0x205f64: 0x101080
    ctx->pc = 0x205f64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x205f68: 0x431021
    ctx->pc = 0x205f68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205f6c: 0x8c420000
    ctx->pc = 0x205f6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205f70: 0x14400003
    ctx->pc = 0x205F70u;
    {
        const bool branch_taken_0x205f70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205F74u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 3));
        if (branch_taken_0x205f70) {
            ctx->pc = 0x205F80u;
            goto label_205f80;
        }
    }
    ctx->pc = 0x205F78u;
    // 0x205f78: 0x10000107
    ctx->pc = 0x205F78u;
    {
        const bool branch_taken_0x205f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x205F7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x205f78) {
            ctx->pc = 0x206398u;
            goto label_206398;
        }
    }
    ctx->pc = 0x205F80u;
label_205f80:
    // 0x205f80: 0x3c040031
    ctx->pc = 0x205f80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x205f84: 0x24840ee8
    ctx->pc = 0x205f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3816));
    // 0x205f88: 0x51080
    ctx->pc = 0x205f88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x205f8c: 0x61900
    ctx->pc = 0x205f8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
    // 0x205f90: 0x431021
    ctx->pc = 0x205f90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205f94: 0x441021
    ctx->pc = 0x205f94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x205f98: 0x8c420000
    ctx->pc = 0x205f98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x205f9c: 0x10400005
    ctx->pc = 0x205F9Cu;
    {
        const bool branch_taken_0x205f9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x205FA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x205f9c) {
            ctx->pc = 0x205FB4u;
            goto label_205fb4;
        }
    }
    ctx->pc = 0x205FA4u;
    // 0x205fa4: 0xc0b90a0
    ctx->pc = 0x205FA4u;
    SET_GPR_U32(ctx, 31, 0x205FACu);
    ctx->pc = 0x205FA8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E4280u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x2e4280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205FACu; }
    }
    if (ctx->pc != 0x205FACu) { return; }
    ctx->pc = 0x205FACu;
    // 0x205fac: 0x14400003
    ctx->pc = 0x205FACu;
    {
        const bool branch_taken_0x205fac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205FB0u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x205fac) {
            ctx->pc = 0x205FBCu;
            goto label_205fbc;
        }
    }
    ctx->pc = 0x205FB4u;
label_205fb4:
    // 0x205fb4: 0x100000f8
    ctx->pc = 0x205FB4u;
    {
        const bool branch_taken_0x205fb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x205FB8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x205fb4) {
            ctx->pc = 0x206398u;
            goto label_206398;
        }
    }
    ctx->pc = 0x205FBCu;
label_205fbc:
    // 0x205fbc: 0x144000f6
    ctx->pc = 0x205FBCu;
    {
        const bool branch_taken_0x205fbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205FC0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x205fbc) {
            ctx->pc = 0x206398u;
            goto label_206398;
        }
    }
    ctx->pc = 0x205FC4u;
    // 0x205fc4: 0x3c02003c
    ctx->pc = 0x205fc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205fc8: 0x2442bd80
    ctx->pc = 0x205fc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950272));
    // 0x205fcc: 0x101880
    ctx->pc = 0x205fccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x205fd0: 0x621821
    ctx->pc = 0x205fd0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x205fd4: 0x8c640000
    ctx->pc = 0x205fd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205fd8: 0x10800005
    ctx->pc = 0x205FD8u;
    {
        const bool branch_taken_0x205fd8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x205FDCu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        if (branch_taken_0x205fd8) {
            ctx->pc = 0x205FF0u;
            goto label_205ff0;
        }
    }
    ctx->pc = 0x205FE0u;
    // 0x205fe0: 0x10820009
    ctx->pc = 0x205FE0u;
    {
        const bool branch_taken_0x205fe0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x205FE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x205fe0) {
            ctx->pc = 0x206008u;
            goto label_206008;
        }
    }
    ctx->pc = 0x205FE8u;
    // 0x205fe8: 0x100000eb
    ctx->pc = 0x205FE8u;
    {
        const bool branch_taken_0x205fe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x205FECu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x205fe8) {
            ctx->pc = 0x206398u;
            goto label_206398;
        }
    }
    ctx->pc = 0x205FF0u;
label_205ff0:
    // 0x205ff0: 0x3c02003c
    ctx->pc = 0x205ff0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205ff4: 0x2442bd80
    ctx->pc = 0x205ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950272));
    // 0x205ff8: 0x101880
    ctx->pc = 0x205ff8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x205ffc: 0x621821
    ctx->pc = 0x205ffcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206000: 0x93a20001
    ctx->pc = 0x206000u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x206004: 0xac620000
    ctx->pc = 0x206004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_206008:
    // 0x206008: 0x122000e2
    ctx->pc = 0x206008u;
    {
        const bool branch_taken_0x206008 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x20600Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x206008) {
            ctx->pc = 0x206394u;
            goto label_206394;
        }
    }
    ctx->pc = 0x206010u;
    // 0x206010: 0x2463bda0
    ctx->pc = 0x206010u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950304));
    // 0x206014: 0x101080
    ctx->pc = 0x206014u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x206018: 0x431021
    ctx->pc = 0x206018u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20601c: 0x8c430000
    ctx->pc = 0x20601cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206020: 0x24020005
    ctx->pc = 0x206020u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x206024: 0x5462003e
    ctx->pc = 0x206024u;
    {
        const bool branch_taken_0x206024 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x206024) {
            ctx->pc = 0x206028u;
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
            ctx->pc = 0x206120u;
            goto label_206120;
        }
    }
    ctx->pc = 0x20602Cu;
    // 0x20602c: 0x26240002
    ctx->pc = 0x20602cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2));
    // 0x206030: 0xc0817c0
    ctx->pc = 0x206030u;
    SET_GPR_U32(ctx, 31, 0x206038u);
    ctx->pc = 0x206034u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206038u; }
    }
    if (ctx->pc != 0x206038u) { return; }
    ctx->pc = 0x206038u;
    // 0x206038: 0x220202d
    ctx->pc = 0x206038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20603c: 0xc0817c0
    ctx->pc = 0x20603Cu;
    SET_GPR_U32(ctx, 31, 0x206044u);
    ctx->pc = 0x206040u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206044u; }
    }
    if (ctx->pc != 0x206044u) { return; }
    ctx->pc = 0x206044u;
    // 0x206044: 0x26240004
    ctx->pc = 0x206044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4));
    // 0x206048: 0xc0817c0
    ctx->pc = 0x206048u;
    SET_GPR_U32(ctx, 31, 0x206050u);
    ctx->pc = 0x20604Cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 10)));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206050u; }
    }
    if (ctx->pc != 0x206050u) { return; }
    ctx->pc = 0x206050u;
    // 0x206050: 0x26240006
    ctx->pc = 0x206050u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 6));
    // 0x206054: 0xc0817c0
    ctx->pc = 0x206054u;
    SET_GPR_U32(ctx, 31, 0x20605Cu);
    ctx->pc = 0x206058u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 11)));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20605Cu; }
    }
    if (ctx->pc != 0x20605Cu) { return; }
    ctx->pc = 0x20605Cu;
    // 0x20605c: 0x26240018
    ctx->pc = 0x20605cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 24));
    // 0x206060: 0xc0817c0
    ctx->pc = 0x206060u;
    SET_GPR_U32(ctx, 31, 0x206068u);
    ctx->pc = 0x206064u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206068u; }
    }
    if (ctx->pc != 0x206068u) { return; }
    ctx->pc = 0x206068u;
    // 0x206068: 0x26240016
    ctx->pc = 0x206068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 22));
    // 0x20606c: 0xc0817c0
    ctx->pc = 0x20606Cu;
    SET_GPR_U32(ctx, 31, 0x206074u);
    ctx->pc = 0x206070u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 13)));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206074u; }
    }
    if (ctx->pc != 0x206074u) { return; }
    ctx->pc = 0x206074u;
    // 0x206074: 0x2624001a
    ctx->pc = 0x206074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 26));
    // 0x206078: 0xc0817c0
    ctx->pc = 0x206078u;
    SET_GPR_U32(ctx, 31, 0x206080u);
    ctx->pc = 0x20607Cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 14)));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206080u; }
    }
    if (ctx->pc != 0x206080u) { return; }
    ctx->pc = 0x206080u;
    // 0x206080: 0x26240014
    ctx->pc = 0x206080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 20));
    // 0x206084: 0xc0817c0
    ctx->pc = 0x206084u;
    SET_GPR_U32(ctx, 31, 0x20608Cu);
    ctx->pc = 0x206088u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 15)));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20608Cu; }
    }
    if (ctx->pc != 0x20608Cu) { return; }
    ctx->pc = 0x20608Cu;
    // 0x20608c: 0x26240010
    ctx->pc = 0x20608cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    // 0x206090: 0xc0817c0
    ctx->pc = 0x206090u;
    SET_GPR_U32(ctx, 31, 0x206098u);
    ctx->pc = 0x206094u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206098u; }
    }
    if (ctx->pc != 0x206098u) { return; }
    ctx->pc = 0x206098u;
    // 0x206098: 0x26240024
    ctx->pc = 0x206098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 36));
    // 0x20609c: 0xc0817c0
    ctx->pc = 0x20609Cu;
    SET_GPR_U32(ctx, 31, 0x2060A4u);
    ctx->pc = 0x2060A0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060A4u; }
    }
    if (ctx->pc != 0x2060A4u) { return; }
    ctx->pc = 0x2060A4u;
    // 0x2060a4: 0x26240012
    ctx->pc = 0x2060a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18));
    // 0x2060a8: 0xc0817c0
    ctx->pc = 0x2060A8u;
    SET_GPR_U32(ctx, 31, 0x2060B0u);
    ctx->pc = 0x2060ACu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060B0u; }
    }
    if (ctx->pc != 0x2060B0u) { return; }
    ctx->pc = 0x2060B0u;
    // 0x2060b0: 0x26240026
    ctx->pc = 0x2060b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 38));
    // 0x2060b4: 0xc0817c0
    ctx->pc = 0x2060B4u;
    SET_GPR_U32(ctx, 31, 0x2060BCu);
    ctx->pc = 0x2060B8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060BCu; }
    }
    if (ctx->pc != 0x2060BCu) { return; }
    ctx->pc = 0x2060BCu;
    // 0x2060bc: 0x93a50002
    ctx->pc = 0x2060bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2060c0: 0x528c2
    ctx->pc = 0x2060c0u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 3));
    // 0x2060c4: 0x38a50001
    ctx->pc = 0x2060c4u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x2060c8: 0x26240028
    ctx->pc = 0x2060c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 40));
    // 0x2060cc: 0xc0817b4
    ctx->pc = 0x2060CCu;
    SET_GPR_U32(ctx, 31, 0x2060D4u);
    ctx->pc = 0x2060D0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060D4u; }
    }
    if (ctx->pc != 0x2060D4u) { return; }
    ctx->pc = 0x2060D4u;
    // 0x2060d4: 0x93a50002
    ctx->pc = 0x2060d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2060d8: 0x52882
    ctx->pc = 0x2060d8u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 2));
    // 0x2060dc: 0x38a50001
    ctx->pc = 0x2060dcu;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x2060e0: 0x2624002e
    ctx->pc = 0x2060e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 46));
    // 0x2060e4: 0xc0817b4
    ctx->pc = 0x2060E4u;
    SET_GPR_U32(ctx, 31, 0x2060ECu);
    ctx->pc = 0x2060E8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2060ECu; }
    }
    if (ctx->pc != 0x2060ECu) { return; }
    ctx->pc = 0x2060ECu;
    // 0x2060ec: 0x93a50002
    ctx->pc = 0x2060ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2060f0: 0x52842
    ctx->pc = 0x2060f0u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 1));
    // 0x2060f4: 0x38a50001
    ctx->pc = 0x2060f4u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x2060f8: 0x2624002c
    ctx->pc = 0x2060f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 44));
    // 0x2060fc: 0xc0817b4
    ctx->pc = 0x2060FCu;
    SET_GPR_U32(ctx, 31, 0x206104u);
    ctx->pc = 0x206100u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206104u; }
    }
    if (ctx->pc != 0x206104u) { return; }
    ctx->pc = 0x206104u;
    // 0x206104: 0x93a50002
    ctx->pc = 0x206104u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x206108: 0x38a50001
    ctx->pc = 0x206108u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x20610c: 0x2624002a
    ctx->pc = 0x20610cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 42));
    // 0x206110: 0xc0817b4
    ctx->pc = 0x206110u;
    SET_GPR_U32(ctx, 31, 0x206118u);
    ctx->pc = 0x206114u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206118u; }
    }
    if (ctx->pc != 0x206118u) { return; }
    ctx->pc = 0x206118u;
    // 0x206118: 0x1000005d
    ctx->pc = 0x206118u;
    {
        const bool branch_taken_0x206118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20611Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x206118) {
            ctx->pc = 0x206290u;
            goto label_206290;
        }
    }
    ctx->pc = 0x206120u;
label_206120:
    // 0x206120: 0x529c2
    ctx->pc = 0x206120u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 7));
    // 0x206124: 0x220202d
    ctx->pc = 0x206124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206128: 0xc0817b4
    ctx->pc = 0x206128u;
    SET_GPR_U32(ctx, 31, 0x206130u);
    ctx->pc = 0x20612Cu;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206130u; }
    }
    if (ctx->pc != 0x206130u) { return; }
    ctx->pc = 0x206130u;
    // 0x206130: 0x93a50002
    ctx->pc = 0x206130u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x206134: 0x52982
    ctx->pc = 0x206134u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 6));
    // 0x206138: 0x38a50001
    ctx->pc = 0x206138u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x20613c: 0x26240006
    ctx->pc = 0x20613cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 6));
    // 0x206140: 0xc0817b4
    ctx->pc = 0x206140u;
    SET_GPR_U32(ctx, 31, 0x206148u);
    ctx->pc = 0x206144u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206148u; }
    }
    if (ctx->pc != 0x206148u) { return; }
    ctx->pc = 0x206148u;
    // 0x206148: 0x93a50002
    ctx->pc = 0x206148u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x20614c: 0x52942
    ctx->pc = 0x20614cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 5));
    // 0x206150: 0x38a50001
    ctx->pc = 0x206150u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x206154: 0x26240002
    ctx->pc = 0x206154u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2));
    // 0x206158: 0xc0817b4
    ctx->pc = 0x206158u;
    SET_GPR_U32(ctx, 31, 0x206160u);
    ctx->pc = 0x20615Cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206160u; }
    }
    if (ctx->pc != 0x206160u) { return; }
    ctx->pc = 0x206160u;
    // 0x206160: 0x93a50002
    ctx->pc = 0x206160u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x206164: 0x52902
    ctx->pc = 0x206164u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 4));
    // 0x206168: 0x38a50001
    ctx->pc = 0x206168u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x20616c: 0x26240004
    ctx->pc = 0x20616cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4));
    // 0x206170: 0xc0817b4
    ctx->pc = 0x206170u;
    SET_GPR_U32(ctx, 31, 0x206178u);
    ctx->pc = 0x206174u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206178u; }
    }
    if (ctx->pc != 0x206178u) { return; }
    ctx->pc = 0x206178u;
    // 0x206178: 0x93a50002
    ctx->pc = 0x206178u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x20617c: 0x528c2
    ctx->pc = 0x20617cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 3));
    // 0x206180: 0x38a50001
    ctx->pc = 0x206180u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x206184: 0x26240028
    ctx->pc = 0x206184u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 40));
    // 0x206188: 0xc0817b4
    ctx->pc = 0x206188u;
    SET_GPR_U32(ctx, 31, 0x206190u);
    ctx->pc = 0x20618Cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206190u; }
    }
    if (ctx->pc != 0x206190u) { return; }
    ctx->pc = 0x206190u;
    // 0x206190: 0x93a50002
    ctx->pc = 0x206190u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x206194: 0x52882
    ctx->pc = 0x206194u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 2));
    // 0x206198: 0x38a50001
    ctx->pc = 0x206198u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x20619c: 0x2624002e
    ctx->pc = 0x20619cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 46));
    // 0x2061a0: 0xc0817b4
    ctx->pc = 0x2061A0u;
    SET_GPR_U32(ctx, 31, 0x2061A8u);
    ctx->pc = 0x2061A4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2061A8u; }
    }
    if (ctx->pc != 0x2061A8u) { return; }
    ctx->pc = 0x2061A8u;
    // 0x2061a8: 0x93a50002
    ctx->pc = 0x2061a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2061ac: 0x52842
    ctx->pc = 0x2061acu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 1));
    // 0x2061b0: 0x38a50001
    ctx->pc = 0x2061b0u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x2061b4: 0x2624002c
    ctx->pc = 0x2061b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 44));
    // 0x2061b8: 0xc0817b4
    ctx->pc = 0x2061B8u;
    SET_GPR_U32(ctx, 31, 0x2061C0u);
    ctx->pc = 0x2061BCu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2061C0u; }
    }
    if (ctx->pc != 0x2061C0u) { return; }
    ctx->pc = 0x2061C0u;
    // 0x2061c0: 0x93a50002
    ctx->pc = 0x2061c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2061c4: 0x38a50001
    ctx->pc = 0x2061c4u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x2061c8: 0x2624002a
    ctx->pc = 0x2061c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 42));
    // 0x2061cc: 0xc0817b4
    ctx->pc = 0x2061CCu;
    SET_GPR_U32(ctx, 31, 0x2061D4u);
    ctx->pc = 0x2061D0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2061D4u; }
    }
    if (ctx->pc != 0x2061D4u) { return; }
    ctx->pc = 0x2061D4u;
    // 0x2061d4: 0x93a50003
    ctx->pc = 0x2061d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2061d8: 0x529c2
    ctx->pc = 0x2061d8u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 7));
    // 0x2061dc: 0x26240014
    ctx->pc = 0x2061dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 20));
    // 0x2061e0: 0xc0817b4
    ctx->pc = 0x2061E0u;
    SET_GPR_U32(ctx, 31, 0x2061E8u);
    ctx->pc = 0x2061E4u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2061E8u; }
    }
    if (ctx->pc != 0x2061E8u) { return; }
    ctx->pc = 0x2061E8u;
    // 0x2061e8: 0x93a50003
    ctx->pc = 0x2061e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2061ec: 0x52982
    ctx->pc = 0x2061ecu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 6));
    // 0x2061f0: 0x38a50001
    ctx->pc = 0x2061f0u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x2061f4: 0x2624001a
    ctx->pc = 0x2061f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 26));
    // 0x2061f8: 0xc0817b4
    ctx->pc = 0x2061F8u;
    SET_GPR_U32(ctx, 31, 0x206200u);
    ctx->pc = 0x2061FCu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206200u; }
    }
    if (ctx->pc != 0x206200u) { return; }
    ctx->pc = 0x206200u;
    // 0x206200: 0x93a50003
    ctx->pc = 0x206200u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x206204: 0x52942
    ctx->pc = 0x206204u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 5));
    // 0x206208: 0x38a50001
    ctx->pc = 0x206208u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x20620c: 0x26240016
    ctx->pc = 0x20620cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 22));
    // 0x206210: 0xc0817b4
    ctx->pc = 0x206210u;
    SET_GPR_U32(ctx, 31, 0x206218u);
    ctx->pc = 0x206214u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206218u; }
    }
    if (ctx->pc != 0x206218u) { return; }
    ctx->pc = 0x206218u;
    // 0x206218: 0x93a50003
    ctx->pc = 0x206218u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x20621c: 0x52902
    ctx->pc = 0x20621cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 4));
    // 0x206220: 0x38a50001
    ctx->pc = 0x206220u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x206224: 0x26240018
    ctx->pc = 0x206224u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 24));
    // 0x206228: 0xc0817b4
    ctx->pc = 0x206228u;
    SET_GPR_U32(ctx, 31, 0x206230u);
    ctx->pc = 0x20622Cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206230u; }
    }
    if (ctx->pc != 0x206230u) { return; }
    ctx->pc = 0x206230u;
    // 0x206230: 0x93a50003
    ctx->pc = 0x206230u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x206234: 0x528c2
    ctx->pc = 0x206234u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 3));
    // 0x206238: 0x38a50001
    ctx->pc = 0x206238u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x20623c: 0x26240024
    ctx->pc = 0x20623cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 36));
    // 0x206240: 0xc0817b4
    ctx->pc = 0x206240u;
    SET_GPR_U32(ctx, 31, 0x206248u);
    ctx->pc = 0x206244u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206248u; }
    }
    if (ctx->pc != 0x206248u) { return; }
    ctx->pc = 0x206248u;
    // 0x206248: 0x93a50003
    ctx->pc = 0x206248u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x20624c: 0x52882
    ctx->pc = 0x20624cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 2));
    // 0x206250: 0x38a50001
    ctx->pc = 0x206250u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x206254: 0x26240010
    ctx->pc = 0x206254u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    // 0x206258: 0xc0817b4
    ctx->pc = 0x206258u;
    SET_GPR_U32(ctx, 31, 0x206260u);
    ctx->pc = 0x20625Cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206260u; }
    }
    if (ctx->pc != 0x206260u) { return; }
    ctx->pc = 0x206260u;
    // 0x206260: 0x93a50003
    ctx->pc = 0x206260u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x206264: 0x52842
    ctx->pc = 0x206264u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 1));
    // 0x206268: 0x38a50001
    ctx->pc = 0x206268u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x20626c: 0x26240026
    ctx->pc = 0x20626cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 38));
    // 0x206270: 0xc0817b4
    ctx->pc = 0x206270u;
    SET_GPR_U32(ctx, 31, 0x206278u);
    ctx->pc = 0x206274u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206278u; }
    }
    if (ctx->pc != 0x206278u) { return; }
    ctx->pc = 0x206278u;
    // 0x206278: 0x93a50003
    ctx->pc = 0x206278u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x20627c: 0x38a50001
    ctx->pc = 0x20627cu;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
    // 0x206280: 0x26240012
    ctx->pc = 0x206280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 18));
    // 0x206284: 0xc0817b4
    ctx->pc = 0x206284u;
    SET_GPR_U32(ctx, 31, 0x20628Cu);
    ctx->pc = 0x206288u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDigitalButton_0x205ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20628Cu; }
    }
    if (ctx->pc != 0x20628Cu) { return; }
    ctx->pc = 0x20628Cu;
    // 0x20628c: 0x3c03003c
    ctx->pc = 0x20628cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_206290:
    // 0x206290: 0x2463bda0
    ctx->pc = 0x206290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950304));
    // 0x206294: 0x101080
    ctx->pc = 0x206294u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x206298: 0x431021
    ctx->pc = 0x206298u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20629c: 0x8c430000
    ctx->pc = 0x20629cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2062a0: 0x24020004
    ctx->pc = 0x2062a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2062a4: 0x14620013
    ctx->pc = 0x2062A4u;
    {
        const bool branch_taken_0x2062a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2062A8u;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
        if (branch_taken_0x2062a4) {
            ctx->pc = 0x2062F4u;
            goto label_2062f4;
        }
    }
    ctx->pc = 0x2062ACu;
    // 0x2062ac: 0xc0817bc
    ctx->pc = 0x2062ACu;
    SET_GPR_U32(ctx, 31, 0x2062B4u);
    ctx->pc = 0x2062B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x205EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMissingButton_0x205ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2062B4u; }
    }
    if (ctx->pc != 0x2062B4u) { return; }
    ctx->pc = 0x2062B4u;
    // 0x2062b4: 0xc0817bc
    ctx->pc = 0x2062B4u;
    SET_GPR_U32(ctx, 31, 0x2062BCu);
    ctx->pc = 0x2062B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 10));
    ctx->pc = 0x205EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMissingButton_0x205ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2062BCu; }
    }
    if (ctx->pc != 0x2062BCu) { return; }
    ctx->pc = 0x2062BCu;
    // 0x2062bc: 0xc0817bc
    ctx->pc = 0x2062BCu;
    SET_GPR_U32(ctx, 31, 0x2062C4u);
    ctx->pc = 0x2062C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 12));
    ctx->pc = 0x205EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMissingButton_0x205ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2062C4u; }
    }
    if (ctx->pc != 0x2062C4u) { return; }
    ctx->pc = 0x2062C4u;
    // 0x2062c4: 0xc0817bc
    ctx->pc = 0x2062C4u;
    SET_GPR_U32(ctx, 31, 0x2062CCu);
    ctx->pc = 0x2062C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 14));
    ctx->pc = 0x205EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMissingButton_0x205ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2062CCu; }
    }
    if (ctx->pc != 0x2062CCu) { return; }
    ctx->pc = 0x2062CCu;
    // 0x2062cc: 0xc0817bc
    ctx->pc = 0x2062CCu;
    SET_GPR_U32(ctx, 31, 0x2062D4u);
    ctx->pc = 0x2062D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 28));
    ctx->pc = 0x205EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMissingButton_0x205ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2062D4u; }
    }
    if (ctx->pc != 0x2062D4u) { return; }
    ctx->pc = 0x2062D4u;
    // 0x2062d4: 0xc0817bc
    ctx->pc = 0x2062D4u;
    SET_GPR_U32(ctx, 31, 0x2062DCu);
    ctx->pc = 0x2062D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 30));
    ctx->pc = 0x205EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMissingButton_0x205ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2062DCu; }
    }
    if (ctx->pc != 0x2062DCu) { return; }
    ctx->pc = 0x2062DCu;
    // 0x2062dc: 0xc0817bc
    ctx->pc = 0x2062DCu;
    SET_GPR_U32(ctx, 31, 0x2062E4u);
    ctx->pc = 0x2062E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x205EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMissingButton_0x205ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2062E4u; }
    }
    if (ctx->pc != 0x2062E4u) { return; }
    ctx->pc = 0x2062E4u;
    // 0x2062e4: 0xc0817bc
    ctx->pc = 0x2062E4u;
    SET_GPR_U32(ctx, 31, 0x2062ECu);
    ctx->pc = 0x2062E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 34));
    ctx->pc = 0x205EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setMissingButton_0x205ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2062ECu; }
    }
    if (ctx->pc != 0x2062ECu) { return; }
    ctx->pc = 0x2062ECu;
    // 0x2062ec: 0x1000002a
    ctx->pc = 0x2062ECu;
    {
        const bool branch_taken_0x2062ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2062F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2062ec) {
            ctx->pc = 0x206398u;
            goto label_206398;
        }
    }
    ctx->pc = 0x2062F4u;
label_2062f4:
    // 0x2062f4: 0x24100080
    ctx->pc = 0x2062f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2062f8: 0x2052823
    ctx->pc = 0x2062f8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2062fc: 0x26240008
    ctx->pc = 0x2062fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
    // 0x206300: 0xc0817c0
    ctx->pc = 0x206300u;
    SET_GPR_U32(ctx, 31, 0x206308u);
    ctx->pc = 0x206304u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206308u; }
    }
    if (ctx->pc != 0x206308u) { return; }
    ctx->pc = 0x206308u;
    // 0x206308: 0x93a50006
    ctx->pc = 0x206308u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x20630c: 0x24a5ff80
    ctx->pc = 0x20630cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x206310: 0x2624000a
    ctx->pc = 0x206310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 10));
    // 0x206314: 0xc0817c0
    ctx->pc = 0x206314u;
    SET_GPR_U32(ctx, 31, 0x20631Cu);
    ctx->pc = 0x206318u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20631Cu; }
    }
    if (ctx->pc != 0x20631Cu) { return; }
    ctx->pc = 0x20631Cu;
    // 0x20631c: 0x93a50007
    ctx->pc = 0x20631cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x206320: 0x2052823
    ctx->pc = 0x206320u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x206324: 0x2624000c
    ctx->pc = 0x206324u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 12));
    // 0x206328: 0xc0817c0
    ctx->pc = 0x206328u;
    SET_GPR_U32(ctx, 31, 0x206330u);
    ctx->pc = 0x20632Cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206330u; }
    }
    if (ctx->pc != 0x206330u) { return; }
    ctx->pc = 0x206330u;
    // 0x206330: 0x93a50007
    ctx->pc = 0x206330u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x206334: 0x24a5ff80
    ctx->pc = 0x206334u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x206338: 0x2624000e
    ctx->pc = 0x206338u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 14));
    // 0x20633c: 0xc0817c0
    ctx->pc = 0x20633Cu;
    SET_GPR_U32(ctx, 31, 0x206344u);
    ctx->pc = 0x206340u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206344u; }
    }
    if (ctx->pc != 0x206344u) { return; }
    ctx->pc = 0x206344u;
    // 0x206344: 0x93a50004
    ctx->pc = 0x206344u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x206348: 0x2052823
    ctx->pc = 0x206348u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x20634c: 0x2624001c
    ctx->pc = 0x20634cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 28));
    // 0x206350: 0xc0817c0
    ctx->pc = 0x206350u;
    SET_GPR_U32(ctx, 31, 0x206358u);
    ctx->pc = 0x206354u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206358u; }
    }
    if (ctx->pc != 0x206358u) { return; }
    ctx->pc = 0x206358u;
    // 0x206358: 0x93a50004
    ctx->pc = 0x206358u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20635c: 0x24a5ff80
    ctx->pc = 0x20635cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x206360: 0x2624001e
    ctx->pc = 0x206360u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 30));
    // 0x206364: 0xc0817c0
    ctx->pc = 0x206364u;
    SET_GPR_U32(ctx, 31, 0x20636Cu);
    ctx->pc = 0x206368u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20636Cu; }
    }
    if (ctx->pc != 0x20636Cu) { return; }
    ctx->pc = 0x20636Cu;
    // 0x20636c: 0x93a20005
    ctx->pc = 0x20636cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x206370: 0x2028023
    ctx->pc = 0x206370u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x206374: 0x26240020
    ctx->pc = 0x206374u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 32));
    // 0x206378: 0xc0817c0
    ctx->pc = 0x206378u;
    SET_GPR_U32(ctx, 31, 0x206380u);
    ctx->pc = 0x20637Cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206380u; }
    }
    if (ctx->pc != 0x206380u) { return; }
    ctx->pc = 0x206380u;
    // 0x206380: 0x93a50005
    ctx->pc = 0x206380u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x206384: 0x24a5ff80
    ctx->pc = 0x206384u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x206388: 0x26240022
    ctx->pc = 0x206388u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 34));
    // 0x20638c: 0xc0817c0
    ctx->pc = 0x20638Cu;
    SET_GPR_U32(ctx, 31, 0x206394u);
    ctx->pc = 0x206390u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x205F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAnalogButton_0x205f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206394u; }
    }
    if (ctx->pc != 0x206394u) { return; }
    ctx->pc = 0x206394u;
label_206394:
    // 0x206394: 0x24020001
    ctx->pc = 0x206394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_206398:
    // 0x206398: 0xdfbf0040
    ctx->pc = 0x206398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20639c: 0xdfb10030
    ctx->pc = 0x20639cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2063a0: 0xdfb00020
    ctx->pc = 0x2063a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2063a4: 0x3e00008
    ctx->pc = 0x2063A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2063A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205F80u: goto label_205f80;
            case 0x205FB4u: goto label_205fb4;
            case 0x205FBCu: goto label_205fbc;
            case 0x205FF0u: goto label_205ff0;
            case 0x206008u: goto label_206008;
            case 0x206120u: goto label_206120;
            case 0x206290u: goto label_206290;
            case 0x2062F4u: goto label_2062f4;
            case 0x206394u: goto label_206394;
            case 0x206398u: goto label_206398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2063ACu;
}
