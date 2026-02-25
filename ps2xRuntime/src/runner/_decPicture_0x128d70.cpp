#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _decPicture
// Address: 0x128d70 - 0x128e3c
void _decPicture_0x128d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_decPicture_0x128d70");
#endif

    ctx->pc = 0x128d70u;

    // 0x128d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x128d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x128d74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128d78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128d7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x128d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x128d80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x128d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x128d88: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x128d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x128d8c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x128D8Cu;
    {
        const bool branch_taken_0x128d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x128D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128D8Cu;
            // 0x128d90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d8c) {
            ctx->pc = 0x128DB8u;
            goto label_128db8;
        }
    }
    ctx->pc = 0x128D94u;
    // 0x128d94: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x128d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x128d98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x128D98u;
    {
        const bool branch_taken_0x128d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128D98u;
            // 0x128d9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d98) {
            ctx->pc = 0x128DB8u;
            goto label_128db8;
        }
    }
    ctx->pc = 0x128DA0u;
    // 0x128da0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x128da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x128da4: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x128DA4u;
    SET_GPR_U32(ctx, 31, 0x128DACu);
    ctx->pc = 0x128DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128DA4u;
            // 0x128da8: 0x24a5f360  addiu       $a1, $a1, -0xCA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128DACu; }
        if (ctx->pc != 0x128DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128DACu; }
        if (ctx->pc != 0x128DACu) { return; }
    }
    ctx->pc = 0x128DACu;
    // 0x128dac: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x128dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x128db0: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x128db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x128db4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x128db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_128db8:
    // 0x128db8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x128DB8u;
    {
        const bool branch_taken_0x128db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x128DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DB8u;
            // 0x128dbc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128db8) {
            ctx->pc = 0x128DF4u;
            goto label_128df4;
        }
    }
    ctx->pc = 0x128DC0u;
    // 0x128dc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128DC0u;
    {
        const bool branch_taken_0x128dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DC0u;
            // 0x128dc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dc0) {
            ctx->pc = 0x128DD8u;
            goto label_128dd8;
        }
    }
    ctx->pc = 0x128DC8u;
    // 0x128dc8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128DC8u;
    {
        const bool branch_taken_0x128dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x128DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DC8u;
            // 0x128dcc: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dc8) {
            ctx->pc = 0x128DECu;
            goto label_128dec;
        }
    }
    ctx->pc = 0x128DD0u;
    // 0x128dd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x128DD0u;
    {
        const bool branch_taken_0x128dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DD0u;
            // 0x128dd4: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dd0) {
            ctx->pc = 0x128E00u;
            goto label_128e00;
        }
    }
    ctx->pc = 0x128DD8u;
label_128dd8:
    // 0x128dd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128ddc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x128DDCu;
    {
        const bool branch_taken_0x128ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x128DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DDCu;
            // 0x128de0: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ddc) {
            ctx->pc = 0x128DFCu;
            goto label_128dfc;
        }
    }
    ctx->pc = 0x128DE4u;
    // 0x128de4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x128DE4u;
    {
        const bool branch_taken_0x128de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DE4u;
            // 0x128de8: 0x8e1101c0  lw          $s1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128de4) {
            ctx->pc = 0x128E0Cu;
            goto label_128e0c;
        }
    }
    ctx->pc = 0x128DECu;
label_128dec:
    // 0x128dec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x128DECu;
    {
        const bool branch_taken_0x128dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DECu;
            // 0x128df0: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dec) {
            ctx->pc = 0x128E0Cu;
            goto label_128e0c;
        }
    }
    ctx->pc = 0x128DF4u;
label_128df4:
    // 0x128df4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128DF4u;
    {
        const bool branch_taken_0x128df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128DF4u;
            // 0x128df8: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128df4) {
            ctx->pc = 0x128E0Cu;
            goto label_128e0c;
        }
    }
    ctx->pc = 0x128DFCu;
label_128dfc:
    // 0x128dfc: 0x8e1101c0  lw          $s1, 0x1C0($s0)
    ctx->pc = 0x128dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_128e00:
    // 0x128e00: 0x24a5f380  addiu       $a1, $a1, -0xC80
    ctx->pc = 0x128e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964096));
    // 0x128e04: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x128E04u;
    SET_GPR_U32(ctx, 31, 0x128E0Cu);
    ctx->pc = 0x128E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128E04u;
            // 0x128e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E0Cu; }
        if (ctx->pc != 0x128E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E0Cu; }
        if (ctx->pc != 0x128E0Cu) { return; }
    }
    ctx->pc = 0x128E0Cu;
label_128e0c:
    // 0x128e0c: 0xc049c1e  jal         func_127078
    ctx->pc = 0x128E0Cu;
    SET_GPR_U32(ctx, 31, 0x128E14u);
    ctx->pc = 0x128E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128E0Cu;
            // 0x128e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127078u;
    if (runtime->hasFunction(0x127078u)) {
        auto targetFn = runtime->lookupFunction(0x127078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E14u; }
        if (ctx->pc != 0x128E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pictureData0_0x127078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128E14u; }
        if (ctx->pc != 0x128E14u) { return; }
    }
    ctx->pc = 0x128E14u;
    // 0x128e14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x128e14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e18: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x128E18u;
    {
        const bool branch_taken_0x128e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E18u;
            // 0x128e1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e18) {
            ctx->pc = 0x128E24u;
            goto label_128e24;
        }
    }
    ctx->pc = 0x128E20u;
    // 0x128e20: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x128e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_128e24:
    // 0x128e24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x128e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128e28: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x128e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128e30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128e34: 0x3e00008  jr          $ra
    ctx->pc = 0x128E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128E34u;
            // 0x128e38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128DB8u: goto label_128db8;
            case 0x128DD8u: goto label_128dd8;
            case 0x128DECu: goto label_128dec;
            case 0x128DF4u: goto label_128df4;
            case 0x128DFCu: goto label_128dfc;
            case 0x128E00u: goto label_128e00;
            case 0x128E0Cu: goto label_128e0c;
            case 0x128E24u: goto label_128e24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128E3Cu;
}
