#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _fpadd_parts
// Address: 0x1296a8 - 0x1298dc
void _fpadd_parts_0x1296a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_fpadd_parts_0x1296a8");
#endif

    ctx->pc = 0x1296a8u;

    // 0x1296a8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1296a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1296ac: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x1296acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1296b0: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x1296b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1296b4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1296B4u;
    {
        const bool branch_taken_0x1296b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1296b4) {
            ctx->pc = 0x1296B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1296B4u;
            // 0x1296b8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1296C4u;
            goto label_1296c4;
        }
    }
    ctx->pc = 0x1296BCu;
label_1296bc:
    // 0x1296bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1296BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1296C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1296BCu;
            // 0x1296c0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D8u: goto label_1296d8;
            case 0x129700u: goto label_129700;
            case 0x129750u: goto label_129750;
            case 0x129790u: goto label_129790;
            case 0x1297B4u: goto label_1297b4;
            case 0x1297BCu: goto label_1297bc;
            case 0x1297C8u: goto label_1297c8;
            case 0x1297ECu: goto label_1297ec;
            case 0x129804u: goto label_129804;
            case 0x129810u: goto label_129810;
            case 0x129824u: goto label_129824;
            case 0x12983Cu: goto label_12983c;
            case 0x12984Cu: goto label_12984c;
            case 0x129870u: goto label_129870;
            case 0x12989Cu: goto label_12989c;
            case 0x1298ACu: goto label_1298ac;
            case 0x1298D4u: goto label_1298d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1296C4u;
label_1296c4:
    // 0x1296c4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1296c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1296c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1296C8u;
    {
        const bool branch_taken_0x1296c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1296CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1296C8u;
            // 0x1296cc: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296c8) {
            ctx->pc = 0x1296D8u;
            goto label_1296d8;
        }
    }
    ctx->pc = 0x1296D0u;
label_1296d0:
    // 0x1296d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1296D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1296D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1296D0u;
            // 0x1296d4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D8u: goto label_1296d8;
            case 0x129700u: goto label_129700;
            case 0x129750u: goto label_129750;
            case 0x129790u: goto label_129790;
            case 0x1297B4u: goto label_1297b4;
            case 0x1297BCu: goto label_1297bc;
            case 0x1297C8u: goto label_1297c8;
            case 0x1297ECu: goto label_1297ec;
            case 0x129804u: goto label_129804;
            case 0x129810u: goto label_129810;
            case 0x129824u: goto label_129824;
            case 0x12983Cu: goto label_12983c;
            case 0x12984Cu: goto label_12984c;
            case 0x129870u: goto label_129870;
            case 0x12989Cu: goto label_12989c;
            case 0x1298ACu: goto label_1298ac;
            case 0x1298D4u: goto label_1298d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1296D8u;
label_1296d8:
    // 0x1296d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1296D8u;
    {
        const bool branch_taken_0x1296d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1296DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1296D8u;
            // 0x1296dc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296d8) {
            ctx->pc = 0x129700u;
            goto label_129700;
        }
    }
    ctx->pc = 0x1296E0u;
    // 0x1296e0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1296E0u;
    {
        const bool branch_taken_0x1296e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1296e0) {
            ctx->pc = 0x1296BCu;
            goto label_1296bc;
        }
    }
    ctx->pc = 0x1296E8u;
    // 0x1296e8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1296e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1296ec: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x1296ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1296f0: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1296F0u;
    {
        const bool branch_taken_0x1296f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1296F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1296F0u;
            // 0x1296f4: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296f0) {
            ctx->pc = 0x1296BCu;
            goto label_1296bc;
        }
    }
    ctx->pc = 0x1296F8u;
    // 0x1296f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1296F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1296FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1296F8u;
            // 0x1296fc: 0x2442e508  addiu       $v0, $v0, -0x1AF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D8u: goto label_1296d8;
            case 0x129700u: goto label_129700;
            case 0x129750u: goto label_129750;
            case 0x129790u: goto label_129790;
            case 0x1297B4u: goto label_1297b4;
            case 0x1297BCu: goto label_1297bc;
            case 0x1297C8u: goto label_1297c8;
            case 0x1297ECu: goto label_1297ec;
            case 0x129804u: goto label_129804;
            case 0x129810u: goto label_129810;
            case 0x129824u: goto label_129824;
            case 0x12983Cu: goto label_12983c;
            case 0x12984Cu: goto label_12984c;
            case 0x129870u: goto label_129870;
            case 0x12989Cu: goto label_12989c;
            case 0x1298ACu: goto label_1298ac;
            case 0x1298D4u: goto label_1298d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129700u;
label_129700:
    // 0x129700: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x129700u;
    {
        const bool branch_taken_0x129700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129700u;
            // 0x129704: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129700) {
            ctx->pc = 0x1296D0u;
            goto label_1296d0;
        }
    }
    ctx->pc = 0x129708u;
    // 0x129708: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x129708u;
    {
        const bool branch_taken_0x129708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129708u;
            // 0x12970c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129708) {
            ctx->pc = 0x129750u;
            goto label_129750;
        }
    }
    ctx->pc = 0x129710u;
    // 0x129710: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x129710u;
    {
        const bool branch_taken_0x129710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129710) {
            ctx->pc = 0x1296BCu;
            goto label_1296bc;
        }
    }
    ctx->pc = 0x129718u;
    // 0x129718: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x129718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12971c: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x12971cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x129720: 0x6923000f  ldl         $v1, 0xF($t1)
    ctx->pc = 0x129720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x129724: 0x6d230008  ldr         $v1, 0x8($t1)
    ctx->pc = 0x129724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x129728: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x129728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12972c: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x12972cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129730: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x129730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129734: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x129734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129738: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x129738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x12973c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x12973cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129740: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x129740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x129744: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x129744u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x129748: 0x3e00008  jr          $ra
    ctx->pc = 0x129748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12974Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129748u;
            // 0x12974c: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D8u: goto label_1296d8;
            case 0x129700u: goto label_129700;
            case 0x129750u: goto label_129750;
            case 0x129790u: goto label_129790;
            case 0x1297B4u: goto label_1297b4;
            case 0x1297BCu: goto label_1297bc;
            case 0x1297C8u: goto label_1297c8;
            case 0x1297ECu: goto label_1297ec;
            case 0x129804u: goto label_129804;
            case 0x129810u: goto label_129810;
            case 0x129824u: goto label_129824;
            case 0x12983Cu: goto label_12983c;
            case 0x12984Cu: goto label_12984c;
            case 0x129870u: goto label_129870;
            case 0x12989Cu: goto label_12989c;
            case 0x1298ACu: goto label_1298ac;
            case 0x1298D4u: goto label_1298d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129750u;
label_129750:
    // 0x129750: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x129750u;
    {
        const bool branch_taken_0x129750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129750u;
            // 0x129754: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129750) {
            ctx->pc = 0x1296D0u;
            goto label_1296d0;
        }
    }
    ctx->pc = 0x129758u;
    // 0x129758: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x129758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x12975c: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x12975cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x129760: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x129760u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x129764: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x129764u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x129768: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x129768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12976c: 0x32023  negu        $a0, $v1
    ctx->pc = 0x12976cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x129770: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x129770u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x129774: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x129774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x129778: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x129778u;
    {
        const bool branch_taken_0x129778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129778u;
            // 0x12977c: 0x8caa000c  lw          $t2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129778) {
            ctx->pc = 0x1297ECu;
            goto label_1297ec;
        }
    }
    ctx->pc = 0x129780u;
    // 0x129780: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x129780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x129784: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x129784u;
    {
        const bool branch_taken_0x129784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129784u;
            // 0x129788: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129784) {
            ctx->pc = 0x1297B4u;
            goto label_1297b4;
        }
    }
    ctx->pc = 0x12978Cu;
    // 0x12978c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x12978cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_129790:
    // 0x129790: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x129790u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x129794: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x129794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x129798: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x129798u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)1u)));
    // 0x12979c: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x12979cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1297a0: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1297a0u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1297a4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1297A4u;
    {
        const bool branch_taken_0x1297a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1297a4) {
            ctx->pc = 0x129790u;
            goto label_129790;
        }
    }
    ctx->pc = 0x1297ACu;
    // 0x1297ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1297ACu;
    {
        const bool branch_taken_0x1297ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1297ACu;
            // 0x1297b0: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297ac) {
            ctx->pc = 0x1297BCu;
            goto label_1297bc;
        }
    }
    ctx->pc = 0x1297B4u;
label_1297b4:
    // 0x1297b4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1297b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1297b8: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1297b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1297bc:
    // 0x1297bc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1297BCu;
    {
        const bool branch_taken_0x1297bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1297bc) {
            ctx->pc = 0x129810u;
            goto label_129810;
        }
    }
    ctx->pc = 0x1297C4u;
    // 0x1297c4: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x1297c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1297c8:
    // 0x1297c8: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x1297c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x1297cc: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x1297ccu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)1u)));
    // 0x1297d0: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x1297d0u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1297d4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1297d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1297d8: 0x0  nop
    ctx->pc = 0x1297d8u;
    // NOP
    // 0x1297dc: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1297DCu;
    {
        const bool branch_taken_0x1297dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1297dc) {
            ctx->pc = 0x1297C8u;
            goto label_1297c8;
        }
    }
    ctx->pc = 0x1297E4u;
    // 0x1297e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1297E4u;
    {
        const bool branch_taken_0x1297e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1297E4u;
            // 0x1297e8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297e4) {
            ctx->pc = 0x129810u;
            goto label_129810;
        }
    }
    ctx->pc = 0x1297ECu;
label_1297ec:
    // 0x1297ec: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x1297ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1297f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1297F0u;
    {
        const bool branch_taken_0x1297f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1297F0u;
            // 0x1297f4: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297f0) {
            ctx->pc = 0x129804u;
            goto label_129804;
        }
    }
    ctx->pc = 0x1297F8u;
    // 0x1297f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1297f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1297FCu;
    {
        const bool branch_taken_0x1297fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1297FCu;
            // 0x129800: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297fc) {
            ctx->pc = 0x129810u;
            goto label_129810;
        }
    }
    ctx->pc = 0x129804u;
label_129804:
    // 0x129804: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x129804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129808: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x129808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12980c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12980cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129810:
    // 0x129810: 0x11250022  beq         $t1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x129810u;
    {
        const bool branch_taken_0x129810 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x129814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129810u;
            // 0x129814: 0x16a1021  addu        $v0, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129810) {
            ctx->pc = 0x12989Cu;
            goto label_12989c;
        }
    }
    ctx->pc = 0x129818u;
    // 0x129818: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x129818u;
    {
        const bool branch_taken_0x129818 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x12981Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129818u;
            // 0x12981c: 0x14b1023  subu        $v0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129818) {
            ctx->pc = 0x129824u;
            goto label_129824;
        }
    }
    ctx->pc = 0x129820u;
    // 0x129820: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x129820u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_129824:
    // 0x129824: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129824u;
    {
        const bool branch_taken_0x129824 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x129828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129824u;
            // 0x129828: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129824) {
            ctx->pc = 0x12983Cu;
            goto label_12983c;
        }
    }
    ctx->pc = 0x12982Cu;
    // 0x12982c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x12982cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x129830: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x129830u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x129834: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x129834u;
    {
        const bool branch_taken_0x129834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129834u;
            // 0x129838: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129834) {
            ctx->pc = 0x12984Cu;
            goto label_12984c;
        }
    }
    ctx->pc = 0x12983Cu;
label_12983c:
    // 0x12983c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x12983cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x129840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129844: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x129844u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x129848: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x129848u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_12984c:
    // 0x12984c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x12984cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x129850: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x129850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x129854: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x129854u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65534u)));
    // 0x129858: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x129858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12985c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x12985cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x129860: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x129860u;
    {
        const bool branch_taken_0x129860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129860u;
            // 0x129864: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129860) {
            ctx->pc = 0x1298ACu;
            goto label_1298ac;
        }
    }
    ctx->pc = 0x129868u;
    // 0x129868: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x129868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x12986c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x12986cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65534u)));
label_129870:
    // 0x129870: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x129870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x129874: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x129874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x129878: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x129878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12987c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x12987cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x129880: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x129880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x129884: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x129884u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x129888: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x129888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x12988c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12988Cu;
    {
        const bool branch_taken_0x12988c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x129890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12988Cu;
            // 0x129890: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12988c) {
            ctx->pc = 0x129870u;
            goto label_129870;
        }
    }
    ctx->pc = 0x129894u;
    // 0x129894: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x129894u;
    {
        const bool branch_taken_0x129894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129894u;
            // 0x129898: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129894) {
            ctx->pc = 0x1298ACu;
            goto label_1298ac;
        }
    }
    ctx->pc = 0x12989Cu;
label_12989c:
    // 0x12989c: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x12989cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x1298a0: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x1298a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x1298a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1298a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298a8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1298a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1298ac:
    // 0x1298ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1298acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1298b0: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1298B0u;
    {
        const bool branch_taken_0x1298b0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1298B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298B0u;
            // 0x1298b4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298b0) {
            ctx->pc = 0x1298D4u;
            goto label_1298d4;
        }
    }
    ctx->pc = 0x1298B8u;
    // 0x1298b8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1298b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1298bc: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x1298bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1298c0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1298c0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
    // 0x1298c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1298c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1298c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1298c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1298cc: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1298ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1298d0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1298d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1298d4:
    // 0x1298d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1298D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1298D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298D4u;
            // 0x1298d8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D8u: goto label_1296d8;
            case 0x129700u: goto label_129700;
            case 0x129750u: goto label_129750;
            case 0x129790u: goto label_129790;
            case 0x1297B4u: goto label_1297b4;
            case 0x1297BCu: goto label_1297bc;
            case 0x1297C8u: goto label_1297c8;
            case 0x1297ECu: goto label_1297ec;
            case 0x129804u: goto label_129804;
            case 0x129810u: goto label_129810;
            case 0x129824u: goto label_129824;
            case 0x12983Cu: goto label_12983c;
            case 0x12984Cu: goto label_12984c;
            case 0x129870u: goto label_129870;
            case 0x12989Cu: goto label_12989c;
            case 0x1298ACu: goto label_1298ac;
            case 0x1298D4u: goto label_1298d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1298DCu;
}
