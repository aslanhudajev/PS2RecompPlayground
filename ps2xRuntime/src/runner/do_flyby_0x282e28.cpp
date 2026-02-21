#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_flyby
// Address: 0x282e28 - 0x283000
void do_flyby_0x282e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x282e28u;

    // 0x282e28: 0x27bdffe0
    ctx->pc = 0x282e28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282e2c: 0xffbf0010
    ctx->pc = 0x282e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x282e30: 0xffb00000
    ctx->pc = 0x282e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282e34: 0x3c020031
    ctx->pc = 0x282e34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282e38: 0x8c42ff9c
    ctx->pc = 0x282e38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x282e3c: 0x1440006c
    ctx->pc = 0x282E3Cu;
    {
        const bool branch_taken_0x282e3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282E40u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x282e3c) {
            ctx->pc = 0x282FF0u;
            goto label_282ff0;
        }
    }
    ctx->pc = 0x282E44u;
    // 0x282e44: 0x3c020032
    ctx->pc = 0x282e44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x282e48: 0x8c42f7d0
    ctx->pc = 0x282e48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965200)));
    // 0x282e4c: 0x54400007
    ctx->pc = 0x282E4Cu;
    {
        const bool branch_taken_0x282e4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x282e4c) {
            ctx->pc = 0x282E50u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x282E6Cu;
            goto label_282e6c;
        }
    }
    ctx->pc = 0x282E54u;
    // 0x282e54: 0x3c020031
    ctx->pc = 0x282e54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282e58: 0x8c421b20
    ctx->pc = 0x282e58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6944)));
    // 0x282e5c: 0x3c030030
    ctx->pc = 0x282e5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x282e60: 0x431024
    ctx->pc = 0x282e60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282e64: 0x54400001
    ctx->pc = 0x282E64u;
    {
        const bool branch_taken_0x282e64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x282e64) {
            ctx->pc = 0x282E68u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x282E6Cu;
            goto label_282e6c;
        }
    }
    ctx->pc = 0x282E6Cu;
label_282e6c:
    // 0x282e6c: 0x14a00008
    ctx->pc = 0x282E6Cu;
    {
        const bool branch_taken_0x282e6c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x282E70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x282e6c) {
            ctx->pc = 0x282E90u;
            goto label_282e90;
        }
    }
    ctx->pc = 0x282E74u;
    // 0x282e74: 0x3c040031
    ctx->pc = 0x282e74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x282e78: 0x3c030031
    ctx->pc = 0x282e78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x282e7c: 0x8c82001c
    ctx->pc = 0x282e7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x282e80: 0x8c63ffbc
    ctx->pc = 0x282e80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x282e84: 0x431021
    ctx->pc = 0x282e84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282e88: 0xac82001c
    ctx->pc = 0x282e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x282e8c: 0x3c020035
    ctx->pc = 0x282e8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282e90:
    // 0x282e90: 0x8c42a2d8
    ctx->pc = 0x282e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943448)));
    // 0x282e94: 0x1040000a
    ctx->pc = 0x282E94u;
    {
        const bool branch_taken_0x282e94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x282e94) {
            ctx->pc = 0x282EC0u;
            goto label_282ec0;
        }
    }
    ctx->pc = 0x282E9Cu;
    // 0x282e9c: 0xc09710c
    ctx->pc = 0x282E9Cu;
    SET_GPR_U32(ctx, 31, 0x282EA4u);
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282EA4u; }
    }
    if (ctx->pc != 0x282EA4u) { return; }
    ctx->pc = 0x282EA4u;
    // 0x282ea4: 0xc0a0878
    ctx->pc = 0x282EA4u;
    SET_GPR_U32(ctx, 31, 0x282EACu);
    ctx->pc = 0x2821E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_attract_msgs_0x2821e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282EACu; }
    }
    if (ctx->pc != 0x282EACu) { return; }
    ctx->pc = 0x282EACu;
    // 0x282eac: 0x2404ffff
    ctx->pc = 0x282eacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282eb0: 0xdfbf0010
    ctx->pc = 0x282eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282eb4: 0xdfb00000
    ctx->pc = 0x282eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282eb8: 0x80a0960
    ctx->pc = 0x282EB8u;
    ctx->pc = 0x282EBCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x282580u;
    init_attract_mode_0x282580(rdram, ctx, runtime); return;
    ctx->pc = 0x282EC0u;
label_282ec0:
    // 0x282ec0: 0x14a00017
    ctx->pc = 0x282EC0u;
    {
        const bool branch_taken_0x282ec0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x282EC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x282ec0) {
            ctx->pc = 0x282F20u;
            goto label_282f20;
        }
    }
    ctx->pc = 0x282EC8u;
    // 0x282ec8: 0x3c020035
    ctx->pc = 0x282ec8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282ecc: 0x8c42a2d8
    ctx->pc = 0x282eccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943448)));
    // 0x282ed0: 0x14400013
    ctx->pc = 0x282ED0u;
    {
        const bool branch_taken_0x282ed0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282ED4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x282ed0) {
            ctx->pc = 0x282F20u;
            goto label_282f20;
        }
    }
    ctx->pc = 0x282ED8u;
    // 0x282ed8: 0x3c020035
    ctx->pc = 0x282ed8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282edc: 0x8c42a2d4
    ctx->pc = 0x282edcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943444)));
    // 0x282ee0: 0x2842001f
    ctx->pc = 0x282ee0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 31));
    // 0x282ee4: 0x14400006
    ctx->pc = 0x282EE4u;
    {
        const bool branch_taken_0x282ee4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282EE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x282ee4) {
            ctx->pc = 0x282F00u;
            goto label_282f00;
        }
    }
    ctx->pc = 0x282EECu;
    // 0x282eec: 0x3c020031
    ctx->pc = 0x282eecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282ef0: 0xdc420e28
    ctx->pc = 0x282ef0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x282ef4: 0x30420004
    ctx->pc = 0x282ef4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x282ef8: 0x10400005
    ctx->pc = 0x282EF8u;
    {
        const bool branch_taken_0x282ef8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282EFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x282ef8) {
            ctx->pc = 0x282F10u;
            goto label_282f10;
        }
    }
    ctx->pc = 0x282F00u;
label_282f00:
    // 0x282f00: 0x8c42001c
    ctx->pc = 0x282f00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x282f04: 0x28420e11
    ctx->pc = 0x282f04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3601));
    // 0x282f08: 0x14400005
    ctx->pc = 0x282F08u;
    {
        const bool branch_taken_0x282f08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282F0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x282f08) {
            ctx->pc = 0x282F20u;
            goto label_282f20;
        }
    }
    ctx->pc = 0x282F10u;
label_282f10:
    // 0x282f10: 0x3c030035
    ctx->pc = 0x282f10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x282f14: 0x24020001
    ctx->pc = 0x282f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x282f18: 0xac62a2d8
    ctx->pc = 0x282f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943448), GPR_U32(ctx, 2));
    // 0x282f1c: 0x3c020031
    ctx->pc = 0x282f1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_282f20:
    // 0x282f20: 0x8c42001c
    ctx->pc = 0x282f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x282f24: 0x2842003d
    ctx->pc = 0x282f24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 61));
    // 0x282f28: 0x14400003
    ctx->pc = 0x282F28u;
    {
        const bool branch_taken_0x282f28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x282f28) {
            ctx->pc = 0x282F38u;
            goto label_282f38;
        }
    }
    ctx->pc = 0x282F30u;
    // 0x282f30: 0xc0a08ca
    ctx->pc = 0x282F30u;
    SET_GPR_U32(ctx, 31, 0x282F38u);
    ctx->pc = 0x282F34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x282328u;
    {
        const uint32_t __entryPc = ctx->pc;
        attract_advance_0x282328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F38u; }
    }
    if (ctx->pc != 0x282F38u) { return; }
    ctx->pc = 0x282F38u;
label_282f38:
    // 0x282f38: 0xc09ec26
    ctx->pc = 0x282F38u;
    SET_GPR_U32(ctx, 31, 0x282F40u);
    ctx->pc = 0x27B098u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcessEffects_0x27b098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F40u; }
    }
    if (ctx->pc != 0x282F40u) { return; }
    ctx->pc = 0x282F40u;
    // 0x282f40: 0xc0ab566
    ctx->pc = 0x282F40u;
    SET_GPR_U32(ctx, 31, 0x282F48u);
    ctx->pc = 0x2AD598u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetTexMipK_0x2ad598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F48u; }
    }
    if (ctx->pc != 0x282F48u) { return; }
    ctx->pc = 0x282F48u;
    // 0x282f48: 0x40802d
    ctx->pc = 0x282f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f4c: 0x3c020031
    ctx->pc = 0x282f4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282f50: 0x8c421b3c
    ctx->pc = 0x282f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6972)));
    // 0x282f54: 0x3c030040
    ctx->pc = 0x282f54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
    // 0x282f58: 0x431024
    ctx->pc = 0x282f58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282f5c: 0x10400009
    ctx->pc = 0x282F5Cu;
    {
        const bool branch_taken_0x282f5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282F60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x282f5c) {
            ctx->pc = 0x282F84u;
            goto label_282f84;
        }
    }
    ctx->pc = 0x282F64u;
    // 0x282f64: 0x26100004
    ctx->pc = 0x282f64u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x282f68: 0x3c04003b
    ctx->pc = 0x282f68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x282f6c: 0x2484c460
    ctx->pc = 0x282f6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952032));
    // 0x282f70: 0xc0b4a34
    ctx->pc = 0x282F70u;
    SET_GPR_U32(ctx, 31, 0x282F78u);
    ctx->pc = 0x282F74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F78u; }
    }
    if (ctx->pc != 0x282F78u) { return; }
    ctx->pc = 0x282F78u;
    // 0x282f78: 0xc0ab56c
    ctx->pc = 0x282F78u;
    SET_GPR_U32(ctx, 31, 0x282F80u);
    ctx->pc = 0x282F7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AD5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetTexMipK_0x2ad5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F80u; }
    }
    if (ctx->pc != 0x282F80u) { return; }
    ctx->pc = 0x282F80u;
    // 0x282f80: 0x3c020031
    ctx->pc = 0x282f80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_282f84:
    // 0x282f84: 0x8c421b3c
    ctx->pc = 0x282f84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6972)));
    // 0x282f88: 0x3c030080
    ctx->pc = 0x282f88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
    // 0x282f8c: 0x431024
    ctx->pc = 0x282f8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282f90: 0x10400009
    ctx->pc = 0x282F90u;
    {
        const bool branch_taken_0x282f90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282F94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x282f90) {
            ctx->pc = 0x282FB8u;
            goto label_282fb8;
        }
    }
    ctx->pc = 0x282F98u;
    // 0x282f98: 0x2610fffc
    ctx->pc = 0x282f98u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x282f9c: 0x3c04003b
    ctx->pc = 0x282f9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x282fa0: 0x2484c460
    ctx->pc = 0x282fa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952032));
    // 0x282fa4: 0xc0b4a34
    ctx->pc = 0x282FA4u;
    SET_GPR_U32(ctx, 31, 0x282FACu);
    ctx->pc = 0x282FA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282FACu; }
    }
    if (ctx->pc != 0x282FACu) { return; }
    ctx->pc = 0x282FACu;
    // 0x282fac: 0xc0ab56c
    ctx->pc = 0x282FACu;
    SET_GPR_U32(ctx, 31, 0x282FB4u);
    ctx->pc = 0x282FB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AD5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetTexMipK_0x2ad5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282FB4u; }
    }
    if (ctx->pc != 0x282FB4u) { return; }
    ctx->pc = 0x282FB4u;
    // 0x282fb4: 0x3c020035
    ctx->pc = 0x282fb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282fb8:
    // 0x282fb8: 0x8c42a2d8
    ctx->pc = 0x282fb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943448)));
    // 0x282fbc: 0x1440000d
    ctx->pc = 0x282FBCu;
    {
        const bool branch_taken_0x282fbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282FC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x282fbc) {
            ctx->pc = 0x282FF4u;
            goto label_282ff4;
        }
    }
    ctx->pc = 0x282FC4u;
    // 0x282fc4: 0x3c020031
    ctx->pc = 0x282fc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282fc8: 0x8c42f184
    ctx->pc = 0x282fc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x282fcc: 0x1440000a
    ctx->pc = 0x282FCCu;
    {
        const bool branch_taken_0x282fcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282FD0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x282fcc) {
            ctx->pc = 0x282FF8u;
            goto label_282ff8;
        }
    }
    ctx->pc = 0x282FD4u;
    // 0x282fd4: 0x2404ff00
    ctx->pc = 0x282fd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x282fd8: 0x24050140
    ctx->pc = 0x282fd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 320));
    // 0x282fdc: 0x3c013f80
    ctx->pc = 0x282fdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x282fe0: 0x44816000
    ctx->pc = 0x282fe0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x282fe4: 0x3c06003b
    ctx->pc = 0x282fe4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x282fe8: 0xc080a9a
    ctx->pc = 0x282FE8u;
    SET_GPR_U32(ctx, 31, 0x282FF0u);
    ctx->pc = 0x282FECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952048));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282FF0u; }
    }
    if (ctx->pc != 0x282FF0u) { return; }
    ctx->pc = 0x282FF0u;
label_282ff0:
    // 0x282ff0: 0xdfbf0010
    ctx->pc = 0x282ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_282ff4:
    // 0x282ff4: 0xdfb00000
    ctx->pc = 0x282ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_282ff8:
    // 0x282ff8: 0x3e00008
    ctx->pc = 0x282FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282FFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282E6Cu: goto label_282e6c;
            case 0x282E90u: goto label_282e90;
            case 0x282EC0u: goto label_282ec0;
            case 0x282F00u: goto label_282f00;
            case 0x282F10u: goto label_282f10;
            case 0x282F20u: goto label_282f20;
            case 0x282F38u: goto label_282f38;
            case 0x282F84u: goto label_282f84;
            case 0x282FB8u: goto label_282fb8;
            case 0x282FF0u: goto label_282ff0;
            case 0x282FF4u: goto label_282ff4;
            case 0x282FF8u: goto label_282ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x283000u;
}
