#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _SearchEntry
// Address: 0x120670 - 0x1208f0
void ps2__SearchEntry_0x120670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__SearchEntry_0x120670");
#endif

    ctx->pc = 0x120670u;

    // 0x120670: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x120670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x120674: 0xffb20420  sd          $s2, 0x420($sp)
    ctx->pc = 0x120674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
    // 0x120678: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x120678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12067c: 0xffb30428  sd          $s3, 0x428($sp)
    ctx->pc = 0x12067cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 19));
    // 0x120680: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x120680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120684: 0xffb40430  sd          $s4, 0x430($sp)
    ctx->pc = 0x120684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 20));
    // 0x120688: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x120688u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12068c: 0xffb50438  sd          $s5, 0x438($sp)
    ctx->pc = 0x12068cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 21));
    // 0x120690: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x120690u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120694: 0xffb60440  sd          $s6, 0x440($sp)
    ctx->pc = 0x120694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 22));
    // 0x120698: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x120698u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12069c: 0xffb70448  sd          $s7, 0x448($sp)
    ctx->pc = 0x12069cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 23));
    // 0x1206a0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1206a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1206a4: 0xffbe0450  sd          $fp, 0x450($sp)
    ctx->pc = 0x1206a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 30));
    // 0x1206a8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1206a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206ac: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x1206acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x1206b0: 0xffb10418  sd          $s1, 0x418($sp)
    ctx->pc = 0x1206b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 17));
    // 0x1206b4: 0xffbf0458  sd          $ra, 0x458($sp)
    ctx->pc = 0x1206b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 31));
    // 0x1206b8: 0xafa60404  sw          $a2, 0x404($sp)
    ctx->pc = 0x1206b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 6));
    // 0x1206bc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1206BCu;
    {
        const bool branch_taken_0x1206bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1206C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1206BCu;
            // 0x1206c0: 0xafa00400  sw          $zero, 0x400($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1206bc) {
            ctx->pc = 0x120860u;
            goto label_120860;
        }
    }
    ctx->pc = 0x1206C4u;
    // 0x1206c4: 0x0  nop
    ctx->pc = 0x1206c4u;
    // NOP
label_1206c8:
    // 0x1206c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1206c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206cc: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x1206CCu;
    SET_GPR_U32(ctx, 31, 0x1206D4u);
    ctx->pc = 0x1206D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1206CCu;
            // 0x1206d0: 0x2445f040  addiu       $a1, $v0, -0xFC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1206D4u; }
        if (ctx->pc != 0x1206D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1206D4u; }
        if (ctx->pc != 0x1206D4u) { return; }
    }
    ctx->pc = 0x1206D4u;
    // 0x1206d4: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1206D4u;
    {
        const bool branch_taken_0x1206d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1206D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1206D4u;
            // 0x1206d8: 0x27b00240  addiu       $s0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1206d4) {
            ctx->pc = 0x1208ACu;
            goto label_1208ac;
        }
    }
    ctx->pc = 0x1206DCu;
    // 0x1206dc: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x1206DCu;
    SET_GPR_U32(ctx, 31, 0x1206E4u);
    ctx->pc = 0x1206E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1206DCu;
            // 0x1206e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1206E4u; }
        if (ctx->pc != 0x1206E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1206E4u; }
        if (ctx->pc != 0x1206E4u) { return; }
    }
    ctx->pc = 0x1206E4u;
    // 0x1206e4: 0x2c430020  sltiu       $v1, $v0, 0x20
    ctx->pc = 0x1206e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1206e8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x1206e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x1206ec: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x1206ECu;
    {
        const bool branch_taken_0x1206ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1206F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1206ECu;
            // 0x1206f0: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36866u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1206ec) {
            ctx->pc = 0x1208C0u;
            goto label_1208c0;
        }
    }
    ctx->pc = 0x1206F4u;
    // 0x1206f4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1206f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1206f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1206f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206fc: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x1206FCu;
    SET_GPR_U32(ctx, 31, 0x120704u);
    ctx->pc = 0x120700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1206FCu;
            // 0x120700: 0x24c5f048  addiu       $a1, $a2, -0xFB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120704u; }
        if (ctx->pc != 0x120704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120704u; }
        if (ctx->pc != 0x120704u) { return; }
    }
    ctx->pc = 0x120704u;
    // 0x120704: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x120704u;
    {
        const bool branch_taken_0x120704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120704u;
            // 0x120708: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120704) {
            ctx->pc = 0x1208ACu;
            goto label_1208ac;
        }
    }
    ctx->pc = 0x12070Cu;
label_12070c:
    // 0x12070c: 0x12400047  beqz        $s2, . + 4 + (0x47 << 2)
    ctx->pc = 0x12070Cu;
    {
        const bool branch_taken_0x12070c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x120710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12070Cu;
            // 0x120710: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12070c) {
            ctx->pc = 0x12082Cu;
            goto label_12082c;
        }
    }
    ctx->pc = 0x120714u;
    // 0x120714: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x120714u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_120718:
    // 0x120718: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x120718u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x12071c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x12071Cu;
    {
        const bool branch_taken_0x12071c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12071Cu;
            // 0x120720: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12071c) {
            ctx->pc = 0x120808u;
            goto label_120808;
        }
    }
    ctx->pc = 0x120724u;
    // 0x120724: 0xa200005f  sb          $zero, 0x5F($s0)
    ctx->pc = 0x120724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 95), (uint8_t)GPR_U32(ctx, 0));
    // 0x120728: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x120728u;
    SET_GPR_U32(ctx, 31, 0x120730u);
    ctx->pc = 0x12072Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120728u;
            // 0x12072c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120730u; }
        if (ctx->pc != 0x120730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120730u; }
        if (ctx->pc != 0x120730u) { return; }
    }
    ctx->pc = 0x120730u;
    // 0x120730: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x120730u;
    {
        const bool branch_taken_0x120730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120730u;
            // 0x120734: 0x12102a  slt         $v0, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120730) {
            ctx->pc = 0x12080Cu;
            goto label_12080c;
        }
    }
    ctx->pc = 0x120738u;
    // 0x120738: 0x13c0002e  beqz        $fp, . + 4 + (0x2E << 2)
    ctx->pc = 0x120738u;
    {
        const bool branch_taken_0x120738 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x12073Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120738u;
            // 0x12073c: 0x8fa70404  lw          $a3, 0x404($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120738) {
            ctx->pc = 0x1207F4u;
            goto label_1207f4;
        }
    }
    ctx->pc = 0x120740u;
    // 0x120740: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x120740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120744: 0x2051025  or          $v0, $s0, $a1
    ctx->pc = 0x120744u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x120748: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x120748u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x12074c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12074Cu;
    {
        const bool branch_taken_0x12074c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12074Cu;
            // 0x120750: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12074c) {
            ctx->pc = 0x1207B8u;
            goto label_1207b8;
        }
    }
    ctx->pc = 0x120754u;
    // 0x120754: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x120754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_120758:
    // 0x120758: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x120758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12075c: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x12075cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x120760: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x120760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x120764: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x120764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x120768: 0x68640017  ldl         $a0, 0x17($v1)
    ctx->pc = 0x120768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x12076c: 0x6c640010  ldr         $a0, 0x10($v1)
    ctx->pc = 0x12076cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x120770: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x120770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x120774: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x120774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x120778: 0xb0a70007  sdl         $a3, 0x7($a1)
    ctx->pc = 0x120778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12077c: 0xb4a70000  sdr         $a3, 0x0($a1)
    ctx->pc = 0x12077cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120780: 0xb0a8000f  sdl         $t0, 0xF($a1)
    ctx->pc = 0x120780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120784: 0xb4a80008  sdr         $t0, 0x8($a1)
    ctx->pc = 0x120784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120788: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x120788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12078c: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x12078cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120790: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x120790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120794: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x120794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120798: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x120798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x12079c: 0x0  nop
    ctx->pc = 0x12079cu;
    // NOP
    // 0x1207a0: 0x0  nop
    ctx->pc = 0x1207a0u;
    // NOP
    // 0x1207a4: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1207A4u;
    {
        const bool branch_taken_0x1207a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1207A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1207A4u;
            // 0x1207a8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207a4) {
            ctx->pc = 0x120758u;
            goto label_120758;
        }
    }
    ctx->pc = 0x1207ACu;
    // 0x1207ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1207ACu;
    {
        const bool branch_taken_0x1207ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1207B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1207ACu;
            // 0x1207b0: 0x8fa70404  lw          $a3, 0x404($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207ac) {
            ctx->pc = 0x1207F4u;
            goto label_1207f4;
        }
    }
    ctx->pc = 0x1207B4u;
    // 0x1207b4: 0x0  nop
    ctx->pc = 0x1207b4u;
    // NOP
label_1207b8:
    // 0x1207b8: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x1207b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_1207bc:
    // 0x1207bc: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x1207bcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1207c0: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x1207c0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1207c4: 0xdc640010  ld          $a0, 0x10($v1)
    ctx->pc = 0x1207c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1207c8: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x1207c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1207cc: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x1207ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x1207d0: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x1207d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x1207d4: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x1207d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x1207d8: 0xfca60018  sd          $a2, 0x18($a1)
    ctx->pc = 0x1207d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x1207dc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1207dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1207e0: 0x0  nop
    ctx->pc = 0x1207e0u;
    // NOP
    // 0x1207e4: 0x0  nop
    ctx->pc = 0x1207e4u;
    // NOP
    // 0x1207e8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1207E8u;
    {
        const bool branch_taken_0x1207e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1207ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1207E8u;
            // 0x1207ec: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207e8) {
            ctx->pc = 0x1207BCu;
            goto label_1207bc;
        }
    }
    ctx->pc = 0x1207F0u;
    // 0x1207f0: 0x8fa70404  lw          $a3, 0x404($sp)
    ctx->pc = 0x1207f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_1207f4:
    // 0x1207f4: 0x54e00001  bnel        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1207F4u;
    {
        const bool branch_taken_0x1207f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1207f4) {
            ctx->pc = 0x1207F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1207F4u;
            // 0x1207f8: 0xacf40000  sw          $s4, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1207FCu;
            goto label_1207fc;
        }
    }
    ctx->pc = 0x1207FCu;
label_1207fc:
    // 0x1207fc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1207FCu;
    {
        const bool branch_taken_0x1207fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1207FCu;
            // 0x120800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207fc) {
            ctx->pc = 0x1208C0u;
            goto label_1208c0;
        }
    }
    ctx->pc = 0x120804u;
    // 0x120804: 0x0  nop
    ctx->pc = 0x120804u;
    // NOP
label_120808:
    // 0x120808: 0x12102a  slt         $v0, $zero, $s2
    ctx->pc = 0x120808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_12080c:
    // 0x12080c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12080cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x120810: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x120810u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x120814: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x120814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x120818: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x120818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x12081c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12081Cu;
    {
        const bool branch_taken_0x12081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12081Cu;
            // 0x120820: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12081c) {
            ctx->pc = 0x12082Cu;
            goto label_12082c;
        }
    }
    ctx->pc = 0x120824u;
    // 0x120824: 0x5640ffbc  bnel        $s2, $zero, . + 4 + (-0x44 << 2)
    ctx->pc = 0x120824u;
    {
        const bool branch_taken_0x120824 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x120824) {
            ctx->pc = 0x120828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x120824u;
            // 0x120828: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x120718u;
            goto label_120718;
        }
    }
    ctx->pc = 0x12082Cu;
label_12082c:
    // 0x12082c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12082cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120830: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x120830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120834: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x120834u;
    SET_GPR_U32(ctx, 31, 0x12083Cu);
    ctx->pc = 0x120838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120834u;
            // 0x120838: 0x27a60400  addiu       $a2, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (runtime->hasFunction(0x11F1F0u)) {
        auto targetFn = runtime->lookupFunction(0x11F1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12083Cu; }
        if (ctx->pc != 0x12083Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatGetNextClust_0x11f1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12083Cu; }
        if (ctx->pc != 0x12083Cu) { return; }
    }
    ctx->pc = 0x12083Cu;
    // 0x12083c: 0x8fa30400  lw          $v1, 0x400($sp)
    ctx->pc = 0x12083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x120840: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x120840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120844: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x120844u;
    {
        const bool branch_taken_0x120844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120844u;
            // 0x120848: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120844) {
            ctx->pc = 0x1208C0u;
            goto label_1208c0;
        }
    }
    ctx->pc = 0x12084Cu;
    // 0x12084c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120850: 0x12620019  beq         $s3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x120850u;
    {
        const bool branch_taken_0x120850 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x120854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120850u;
            // 0x120854: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120850) {
            ctx->pc = 0x1208B8u;
            goto label_1208b8;
        }
    }
    ctx->pc = 0x120858u;
    // 0x120858: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120858u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x12085c: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x12085cu;
    SET_GPR_VEC(ctx, 19, PS2_PAND(GPR_VEC(ctx, 19), GPR_VEC(ctx, 2)));
label_120860:
    // 0x120860: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x120860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120864: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x120864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120868: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x120868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12086c: 0xc048e38  jal         func_1238E0
    ctx->pc = 0x12086Cu;
    SET_GPR_U32(ctx, 31, 0x120874u);
    ctx->pc = 0x120870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12086Cu;
            // 0x120870: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238E0u;
    if (runtime->hasFunction(0x1238E0u)) {
        auto targetFn = runtime->lookupFunction(0x1238E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120874u; }
        if (ctx->pc != 0x120874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcpReadUserClust_0x1238e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120874u; }
        if (ctx->pc != 0x120874u) { return; }
    }
    ctx->pc = 0x120874u;
    // 0x120874: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120874u;
    {
        const bool branch_taken_0x120874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120874) {
            ctx->pc = 0x120888u;
            goto label_120888;
        }
    }
    ctx->pc = 0x12087Cu;
    // 0x12087c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x12087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x120880: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x120880u;
    {
        const bool branch_taken_0x120880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120880u;
            // 0x120884: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)111u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120880) {
            ctx->pc = 0x1208C0u;
            goto label_1208c0;
        }
    }
    ctx->pc = 0x120888u;
label_120888:
    // 0x120888: 0x12e0ffa0  beqz        $s7, . + 4 + (-0x60 << 2)
    ctx->pc = 0x120888u;
    {
        const bool branch_taken_0x120888 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12088Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120888u;
            // 0x12088c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120888) {
            ctx->pc = 0x12070Cu;
            goto label_12070c;
        }
    }
    ctx->pc = 0x120890u;
    // 0x120890: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x120890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x120894: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x120894u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120898: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x120898u;
    SET_GPR_U32(ctx, 31, 0x1208A0u);
    ctx->pc = 0x12089Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120898u;
            // 0x12089c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1208A0u; }
        if (ctx->pc != 0x1208A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1208A0u; }
        if (ctx->pc != 0x1208A0u) { return; }
    }
    ctx->pc = 0x1208A0u;
    // 0x1208a0: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x1208a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1208a4: 0x5440ff88  bnel        $v0, $zero, . + 4 + (-0x78 << 2)
    ctx->pc = 0x1208A4u;
    {
        const bool branch_taken_0x1208a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1208a4) {
            ctx->pc = 0x1208A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1208A4u;
            // 0x1208a8: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1206C8u;
            goto label_1206c8;
        }
    }
    ctx->pc = 0x1208ACu;
label_1208ac:
    // 0x1208ac: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x1208acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x1208b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1208B0u;
    {
        const bool branch_taken_0x1208b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1208B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1208B0u;
            // 0x1208b4: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36866u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208b0) {
            ctx->pc = 0x1208C0u;
            goto label_1208c0;
        }
    }
    ctx->pc = 0x1208B8u;
label_1208b8:
    // 0x1208b8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x1208b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x1208bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1208bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2u)));
label_1208c0:
    // 0x1208c0: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x1208c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1208c4: 0xdfb10418  ld          $s1, 0x418($sp)
    ctx->pc = 0x1208c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x1208c8: 0xdfb20420  ld          $s2, 0x420($sp)
    ctx->pc = 0x1208c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1208cc: 0xdfb30428  ld          $s3, 0x428($sp)
    ctx->pc = 0x1208ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x1208d0: 0xdfb40430  ld          $s4, 0x430($sp)
    ctx->pc = 0x1208d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1208d4: 0xdfb50438  ld          $s5, 0x438($sp)
    ctx->pc = 0x1208d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x1208d8: 0xdfb60440  ld          $s6, 0x440($sp)
    ctx->pc = 0x1208d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1208dc: 0xdfb70448  ld          $s7, 0x448($sp)
    ctx->pc = 0x1208dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1096)));
    // 0x1208e0: 0xdfbe0450  ld          $fp, 0x450($sp)
    ctx->pc = 0x1208e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1208e4: 0xdfbf0458  ld          $ra, 0x458($sp)
    ctx->pc = 0x1208e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x1208e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1208E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1208ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1208E8u;
            // 0x1208ec: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1206C8u: goto label_1206c8;
            case 0x12070Cu: goto label_12070c;
            case 0x120718u: goto label_120718;
            case 0x120758u: goto label_120758;
            case 0x1207B8u: goto label_1207b8;
            case 0x1207BCu: goto label_1207bc;
            case 0x1207F4u: goto label_1207f4;
            case 0x1207FCu: goto label_1207fc;
            case 0x120808u: goto label_120808;
            case 0x12080Cu: goto label_12080c;
            case 0x12082Cu: goto label_12082c;
            case 0x120860u: goto label_120860;
            case 0x120888u: goto label_120888;
            case 0x1208ACu: goto label_1208ac;
            case 0x1208B8u: goto label_1208b8;
            case 0x1208C0u: goto label_1208c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1208F0u;
}
