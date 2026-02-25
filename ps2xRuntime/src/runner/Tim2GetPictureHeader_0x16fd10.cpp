#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Tim2GetPictureHeader
// Address: 0x16fd10 - 0x16fdf4
void Tim2GetPictureHeader_0x16fd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Tim2GetPictureHeader_0x16fd10");
#endif

    ctx->pc = 0x16fd10u;

    // 0x16fd10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16fd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fd14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fd18: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x16fd18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x16fd1c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x16fd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16fd20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16FD20u;
    {
        const bool branch_taken_0x16fd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fd20) {
            ctx->pc = 0x16FD40u;
            goto label_16fd40;
        }
    }
    ctx->pc = 0x16FD28u;
    // 0x16fd28: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x16fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x16fd2c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x16FD2Cu;
    SET_GPR_U32(ctx, 31, 0x16FD34u);
    ctx->pc = 0x16FD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD2Cu;
            // 0x16fd30: 0x248411f0  addiu       $a0, $a0, 0x11F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FD34u; }
        if (ctx->pc != 0x16FD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FD34u; }
        if (ctx->pc != 0x16FD34u) { return; }
    }
    ctx->pc = 0x16FD34u;
    // 0x16fd34: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16FD34u;
    {
        const bool branch_taken_0x16fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD34u;
            // 0x16fd38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd34) {
            ctx->pc = 0x16FDE8u;
            goto label_16fde8;
        }
    }
    ctx->pc = 0x16FD3Cu;
    // 0x16fd3c: 0x0  nop
    ctx->pc = 0x16fd3cu;
    // NOP
label_16fd40:
    // 0x16fd40: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x16fd40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x16fd44: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16FD44u;
    {
        const bool branch_taken_0x16fd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD44u;
            // 0x16fd48: 0x24820080  addiu       $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd44) {
            ctx->pc = 0x16FD50u;
            goto label_16fd50;
        }
    }
    ctx->pc = 0x16FD4Cu;
    // 0x16fd4c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x16fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_16fd50:
    // 0x16fd50: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x16fd50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16fd54: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x16FD54u;
    {
        const bool branch_taken_0x16fd54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD54u;
            // 0x16fd58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd54) {
            ctx->pc = 0x16FDE8u;
            goto label_16fde8;
        }
    }
    ctx->pc = 0x16FD5Cu;
    // 0x16fd5c: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x16fd5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x16fd60: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x16FD60u;
    {
        const bool branch_taken_0x16fd60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD60u;
            // 0x16fd64: 0x24a6fff8  addiu       $a2, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd60) {
            ctx->pc = 0x16FDB8u;
            goto label_16fdb8;
        }
    }
    ctx->pc = 0x16FD68u;
label_16fd68:
    // 0x16fd68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fd6c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x16fd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x16fd70: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x16fd70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x16fd74: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x16fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16fd78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fd7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16fd80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fd84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16fd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16fd88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fd8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16fd90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fd94: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16fd98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fd9c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16fda0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fda4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16fda8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fdac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16FDACu;
    {
        const bool branch_taken_0x16fdac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FDACu;
            // 0x16fdb0: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fdac) {
            ctx->pc = 0x16FD68u;
            goto label_16fd68;
        }
    }
    ctx->pc = 0x16FDB4u;
    // 0x16fdb4: 0x0  nop
    ctx->pc = 0x16fdb4u;
    // NOP
label_16fdb8:
    // 0x16fdb8: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x16fdb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16fdbc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x16FDBCu;
    {
        const bool branch_taken_0x16fdbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fdbc) {
            ctx->pc = 0x16FDE8u;
            goto label_16fde8;
        }
    }
    ctx->pc = 0x16FDC4u;
    // 0x16fdc4: 0x0  nop
    ctx->pc = 0x16fdc4u;
    // NOP
label_16fdc8:
    // 0x16fdc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fdcc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16fdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16fdd0: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x16fdd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16fdd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16fdd8: 0x0  nop
    ctx->pc = 0x16fdd8u;
    // NOP
    // 0x16fddc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16FDDCu;
    {
        const bool branch_taken_0x16fddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fddc) {
            ctx->pc = 0x16FDC8u;
            goto label_16fdc8;
        }
    }
    ctx->pc = 0x16FDE4u;
    // 0x16fde4: 0x0  nop
    ctx->pc = 0x16fde4u;
    // NOP
label_16fde8:
    // 0x16fde8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fdec: 0x3e00008  jr          $ra
    ctx->pc = 0x16FDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FDECu;
            // 0x16fdf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FD40u: goto label_16fd40;
            case 0x16FD50u: goto label_16fd50;
            case 0x16FD68u: goto label_16fd68;
            case 0x16FDB8u: goto label_16fdb8;
            case 0x16FDC8u: goto label_16fdc8;
            case 0x16FDE8u: goto label_16fde8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FDF4u;
}
