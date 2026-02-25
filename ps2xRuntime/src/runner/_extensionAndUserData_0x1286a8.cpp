#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _extensionAndUserData
// Address: 0x1286a8 - 0x1287d0
void _extensionAndUserData_0x1286a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_extensionAndUserData_0x1286a8");
#endif

    ctx->pc = 0x1286a8u;

label_1286a8:
    // 0x1286a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1286a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1286ac:
    // 0x1286ac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1286acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1286b0:
    // 0x1286b0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1286b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1286b4:
    // 0x1286b4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1286b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_1286b8:
    // 0x1286b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1286b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1286bc:
    // 0x1286bc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1286bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1286c0:
    // 0x1286c0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1286c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_1286c4:
    // 0x1286c4: 0x241301b2  addiu       $s3, $zero, 0x1B2
    ctx->pc = 0x1286c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_1286c8:
    // 0x1286c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1286c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1286cc:
    // 0x1286cc: 0x241101b5  addiu       $s1, $zero, 0x1B5
    ctx->pc = 0x1286ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_1286d0:
    // 0x1286d0: 0x2447f2d8  addiu       $a3, $v0, -0xD28
    ctx->pc = 0x1286d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963928));
label_1286d4:
    // 0x1286d4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1286d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1286d8:
    // 0x1286d8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1286d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1286dc:
    // 0x1286dc: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1286dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1286e0:
    // 0x1286e0: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1286e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1286e4:
    // 0x1286e4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1286e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1286e8:
    // 0x1286e8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1286e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1286ec:
    // 0x1286ec: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1286ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1286f0:
    // 0x1286f0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1286f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1286f4:
    // 0x1286f4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1286f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1286f8:
    // 0x1286f8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1286f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1286fc:
    // 0x1286fc: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1286fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_128700:
    // 0x128700: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x128700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_128704:
    // 0x128704: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x128704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_128708:
    // 0x128708: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x128708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_12870c:
    // 0x12870c: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x12870cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_128710:
    // 0x128710: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x128710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_128714:
    // 0x128714: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x128714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_128718:
    // 0x128718: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x128718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12871c:
    // 0x12871c: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x12871cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_128720:
    // 0x128720: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x128720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_128724:
    // 0x128724: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x128724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_128728:
    // 0x128728: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x128728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_12872c:
    // 0x12872c: 0xc04a0fa  jal         func_1283E8
label_128730:
    if (ctx->pc == 0x128730u) {
        ctx->pc = 0x128730u;
            // 0x128730: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x128734u;
        goto label_128734;
    }
    ctx->pc = 0x12872Cu;
    SET_GPR_U32(ctx, 31, 0x128734u);
    ctx->pc = 0x128730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12872Cu;
            // 0x128730: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283E8u;
    if (runtime->hasFunction(0x1283E8u)) {
        auto targetFn = runtime->lookupFunction(0x1283E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128734u; }
        if (ctx->pc != 0x128734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1283e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128734u; }
        if (ctx->pc != 0x128734u) { return; }
    }
    ctx->pc = 0x128734u;
label_128734:
    // 0x128734: 0x10000019  b           . + 4 + (0x19 << 2)
label_128738:
    if (ctx->pc == 0x128738u) {
        ctx->pc = 0x128738u;
            // 0x128738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12873Cu;
        goto label_12873c;
    }
    ctx->pc = 0x128734u;
    {
        const bool branch_taken_0x128734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128734u;
            // 0x128738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128734) {
            ctx->pc = 0x12879Cu;
            goto label_12879c;
        }
    }
    ctx->pc = 0x12873Cu;
label_12873c:
    // 0x12873c: 0x0  nop
    ctx->pc = 0x12873cu;
    // NOP
label_128740:
    // 0x128740: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
label_128744:
    if (ctx->pc == 0x128744u) {
        ctx->pc = 0x128744u;
            // 0x128744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128748u;
        goto label_128748;
    }
    ctx->pc = 0x128740u;
    {
        const bool branch_taken_0x128740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x128740) {
            ctx->pc = 0x128744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128740u;
            // 0x128744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128788u;
            goto label_128788;
        }
    }
    ctx->pc = 0x128748u;
label_128748:
    // 0x128748: 0xc04a06a  jal         func_1281A8
label_12874c:
    if (ctx->pc == 0x12874Cu) {
        ctx->pc = 0x128750u;
        goto label_128750;
    }
    ctx->pc = 0x128748u;
    SET_GPR_U32(ctx, 31, 0x128750u);
    ctx->pc = 0x1281A8u;
    if (runtime->hasFunction(0x1281A8u)) {
        auto targetFn = runtime->lookupFunction(0x1281A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128750u; }
        if (ctx->pc != 0x128750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x1281a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128750u; }
        if (ctx->pc != 0x128750u) { return; }
    }
    ctx->pc = 0x128750u;
label_128750:
    // 0x128750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_128754:
    // 0x128754: 0xc04a0a6  jal         func_128298
label_128758:
    if (ctx->pc == 0x128758u) {
        ctx->pc = 0x128758u;
            // 0x128758: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x12875Cu;
        goto label_12875c;
    }
    ctx->pc = 0x128754u;
    SET_GPR_U32(ctx, 31, 0x12875Cu);
    ctx->pc = 0x128758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128754u;
            // 0x128758: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12875Cu; }
        if (ctx->pc != 0x12875Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12875Cu; }
        if (ctx->pc != 0x12875Cu) { return; }
    }
    ctx->pc = 0x12875Cu;
label_12875c:
    // 0x12875c: 0x242182b  sltu        $v1, $s2, $v0
    ctx->pc = 0x12875cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_128760:
    // 0x128760: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x128760u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_128764:
    // 0x128764: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_128768:
    // 0x128768: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x128768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_12876c:
    // 0x12876c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_128770:
    // 0x128770: 0x40f809  jalr        $v0
label_128774:
    if (ctx->pc == 0x128774u) {
        ctx->pc = 0x128774u;
            // 0x128774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128778u;
        goto label_128778;
    }
    ctx->pc = 0x128770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x128778u);
        ctx->pc = 0x128774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128770u;
            // 0x128774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1286A8u: goto label_1286a8;
            case 0x1286ACu: goto label_1286ac;
            case 0x1286B0u: goto label_1286b0;
            case 0x1286B4u: goto label_1286b4;
            case 0x1286B8u: goto label_1286b8;
            case 0x1286BCu: goto label_1286bc;
            case 0x1286C0u: goto label_1286c0;
            case 0x1286C4u: goto label_1286c4;
            case 0x1286C8u: goto label_1286c8;
            case 0x1286CCu: goto label_1286cc;
            case 0x1286D0u: goto label_1286d0;
            case 0x1286D4u: goto label_1286d4;
            case 0x1286D8u: goto label_1286d8;
            case 0x1286DCu: goto label_1286dc;
            case 0x1286E0u: goto label_1286e0;
            case 0x1286E4u: goto label_1286e4;
            case 0x1286E8u: goto label_1286e8;
            case 0x1286ECu: goto label_1286ec;
            case 0x1286F0u: goto label_1286f0;
            case 0x1286F4u: goto label_1286f4;
            case 0x1286F8u: goto label_1286f8;
            case 0x1286FCu: goto label_1286fc;
            case 0x128700u: goto label_128700;
            case 0x128704u: goto label_128704;
            case 0x128708u: goto label_128708;
            case 0x12870Cu: goto label_12870c;
            case 0x128710u: goto label_128710;
            case 0x128714u: goto label_128714;
            case 0x128718u: goto label_128718;
            case 0x12871Cu: goto label_12871c;
            case 0x128720u: goto label_128720;
            case 0x128724u: goto label_128724;
            case 0x128728u: goto label_128728;
            case 0x12872Cu: goto label_12872c;
            case 0x128730u: goto label_128730;
            case 0x128734u: goto label_128734;
            case 0x128738u: goto label_128738;
            case 0x12873Cu: goto label_12873c;
            case 0x128740u: goto label_128740;
            case 0x128744u: goto label_128744;
            case 0x128748u: goto label_128748;
            case 0x12874Cu: goto label_12874c;
            case 0x128750u: goto label_128750;
            case 0x128754u: goto label_128754;
            case 0x128758u: goto label_128758;
            case 0x12875Cu: goto label_12875c;
            case 0x128760u: goto label_128760;
            case 0x128764u: goto label_128764;
            case 0x128768u: goto label_128768;
            case 0x12876Cu: goto label_12876c;
            case 0x128770u: goto label_128770;
            case 0x128774u: goto label_128774;
            case 0x128778u: goto label_128778;
            case 0x12877Cu: goto label_12877c;
            case 0x128780u: goto label_128780;
            case 0x128784u: goto label_128784;
            case 0x128788u: goto label_128788;
            case 0x12878Cu: goto label_12878c;
            case 0x128790u: goto label_128790;
            case 0x128794u: goto label_128794;
            case 0x128798u: goto label_128798;
            case 0x12879Cu: goto label_12879c;
            case 0x1287A0u: goto label_1287a0;
            case 0x1287A4u: goto label_1287a4;
            case 0x1287A8u: goto label_1287a8;
            case 0x1287ACu: goto label_1287ac;
            case 0x1287B0u: goto label_1287b0;
            case 0x1287B4u: goto label_1287b4;
            case 0x1287B8u: goto label_1287b8;
            case 0x1287BCu: goto label_1287bc;
            case 0x1287C0u: goto label_1287c0;
            case 0x1287C4u: goto label_1287c4;
            case 0x1287C8u: goto label_1287c8;
            case 0x1287CCu: goto label_1287cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128778u; }
            if (ctx->pc != 0x128778u) { return; }
        }
    }
    ctx->pc = 0x128778u;
label_128778:
    // 0x128778: 0xc04a0fa  jal         func_1283E8
label_12877c:
    if (ctx->pc == 0x12877Cu) {
        ctx->pc = 0x12877Cu;
            // 0x12877c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128780u;
        goto label_128780;
    }
    ctx->pc = 0x128778u;
    SET_GPR_U32(ctx, 31, 0x128780u);
    ctx->pc = 0x12877Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128778u;
            // 0x12877c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283E8u;
    if (runtime->hasFunction(0x1283E8u)) {
        auto targetFn = runtime->lookupFunction(0x1283E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128780u; }
        if (ctx->pc != 0x128780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1283e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128780u; }
        if (ctx->pc != 0x128780u) { return; }
    }
    ctx->pc = 0x128780u;
label_128780:
    // 0x128780: 0x10000006  b           . + 4 + (0x6 << 2)
label_128784:
    if (ctx->pc == 0x128784u) {
        ctx->pc = 0x128784u;
            // 0x128784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128788u;
        goto label_128788;
    }
    ctx->pc = 0x128780u;
    {
        const bool branch_taken_0x128780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128780u;
            // 0x128784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128780) {
            ctx->pc = 0x12879Cu;
            goto label_12879c;
        }
    }
    ctx->pc = 0x128788u;
label_128788:
    // 0x128788: 0xc04a06a  jal         func_1281A8
label_12878c:
    if (ctx->pc == 0x12878Cu) {
        ctx->pc = 0x12878Cu;
            // 0x12878c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x128790u;
        goto label_128790;
    }
    ctx->pc = 0x128788u;
    SET_GPR_U32(ctx, 31, 0x128790u);
    ctx->pc = 0x12878Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128788u;
            // 0x12878c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1281A8u;
    if (runtime->hasFunction(0x1281A8u)) {
        auto targetFn = runtime->lookupFunction(0x1281A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128790u; }
        if (ctx->pc != 0x128790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x1281a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128790u; }
        if (ctx->pc != 0x128790u) { return; }
    }
    ctx->pc = 0x128790u;
label_128790:
    // 0x128790: 0xc04a0fa  jal         func_1283E8
label_128794:
    if (ctx->pc == 0x128794u) {
        ctx->pc = 0x128794u;
            // 0x128794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128798u;
        goto label_128798;
    }
    ctx->pc = 0x128790u;
    SET_GPR_U32(ctx, 31, 0x128798u);
    ctx->pc = 0x128794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128790u;
            // 0x128794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283E8u;
    if (runtime->hasFunction(0x1283E8u)) {
        auto targetFn = runtime->lookupFunction(0x1283E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128798u; }
        if (ctx->pc != 0x128798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1283e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128798u; }
        if (ctx->pc != 0x128798u) { return; }
    }
    ctx->pc = 0x128798u;
label_128798:
    // 0x128798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12879c:
    // 0x12879c: 0xc04a028  jal         func_1280A0
label_1287a0:
    if (ctx->pc == 0x1287A0u) {
        ctx->pc = 0x1287A0u;
            // 0x1287a0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1287A4u;
        goto label_1287a4;
    }
    ctx->pc = 0x12879Cu;
    SET_GPR_U32(ctx, 31, 0x1287A4u);
    ctx->pc = 0x1287A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12879Cu;
            // 0x1287a0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1280A0u;
    if (runtime->hasFunction(0x1280A0u)) {
        auto targetFn = runtime->lookupFunction(0x1280A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287A4u; }
        if (ctx->pc != 0x1287A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x1280a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287A4u; }
        if (ctx->pc != 0x1287A4u) { return; }
    }
    ctx->pc = 0x1287A4u;
label_1287a4:
    // 0x1287a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1287a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1287a8:
    // 0x1287a8: 0x1051ffe7  beq         $v0, $s1, . + 4 + (-0x19 << 2)
label_1287ac:
    if (ctx->pc == 0x1287ACu) {
        ctx->pc = 0x1287ACu;
            // 0x1287ac: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1287B0u;
        goto label_1287b0;
    }
    ctx->pc = 0x1287A8u;
    {
        const bool branch_taken_0x1287a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1287ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1287A8u;
            // 0x1287ac: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287a8) {
            ctx->pc = 0x128748u;
            goto label_128748;
        }
    }
    ctx->pc = 0x1287B0u;
label_1287b0:
    // 0x1287b0: 0x1053ffe3  beq         $v0, $s3, . + 4 + (-0x1D << 2)
label_1287b4:
    if (ctx->pc == 0x1287B4u) {
        ctx->pc = 0x1287B4u;
            // 0x1287b4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x1287B8u;
        goto label_1287b8;
    }
    ctx->pc = 0x1287B0u;
    {
        const bool branch_taken_0x1287b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1287B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1287B0u;
            // 0x1287b4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287b0) {
            ctx->pc = 0x128740u;
            goto label_128740;
        }
    }
    ctx->pc = 0x1287B8u;
label_1287b8:
    // 0x1287b8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1287b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1287bc:
    // 0x1287bc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1287bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1287c0:
    // 0x1287c0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1287c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1287c4:
    // 0x1287c4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1287c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1287c8:
    // 0x1287c8: 0x3e00008  jr          $ra
label_1287cc:
    if (ctx->pc == 0x1287CCu) {
        ctx->pc = 0x1287CCu;
            // 0x1287cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1287D0u;
        goto label_fallthrough_0x1287c8;
    }
    ctx->pc = 0x1287C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1287CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1287C8u;
            // 0x1287cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1286A8u: goto label_1286a8;
            case 0x1286ACu: goto label_1286ac;
            case 0x1286B0u: goto label_1286b0;
            case 0x1286B4u: goto label_1286b4;
            case 0x1286B8u: goto label_1286b8;
            case 0x1286BCu: goto label_1286bc;
            case 0x1286C0u: goto label_1286c0;
            case 0x1286C4u: goto label_1286c4;
            case 0x1286C8u: goto label_1286c8;
            case 0x1286CCu: goto label_1286cc;
            case 0x1286D0u: goto label_1286d0;
            case 0x1286D4u: goto label_1286d4;
            case 0x1286D8u: goto label_1286d8;
            case 0x1286DCu: goto label_1286dc;
            case 0x1286E0u: goto label_1286e0;
            case 0x1286E4u: goto label_1286e4;
            case 0x1286E8u: goto label_1286e8;
            case 0x1286ECu: goto label_1286ec;
            case 0x1286F0u: goto label_1286f0;
            case 0x1286F4u: goto label_1286f4;
            case 0x1286F8u: goto label_1286f8;
            case 0x1286FCu: goto label_1286fc;
            case 0x128700u: goto label_128700;
            case 0x128704u: goto label_128704;
            case 0x128708u: goto label_128708;
            case 0x12870Cu: goto label_12870c;
            case 0x128710u: goto label_128710;
            case 0x128714u: goto label_128714;
            case 0x128718u: goto label_128718;
            case 0x12871Cu: goto label_12871c;
            case 0x128720u: goto label_128720;
            case 0x128724u: goto label_128724;
            case 0x128728u: goto label_128728;
            case 0x12872Cu: goto label_12872c;
            case 0x128730u: goto label_128730;
            case 0x128734u: goto label_128734;
            case 0x128738u: goto label_128738;
            case 0x12873Cu: goto label_12873c;
            case 0x128740u: goto label_128740;
            case 0x128744u: goto label_128744;
            case 0x128748u: goto label_128748;
            case 0x12874Cu: goto label_12874c;
            case 0x128750u: goto label_128750;
            case 0x128754u: goto label_128754;
            case 0x128758u: goto label_128758;
            case 0x12875Cu: goto label_12875c;
            case 0x128760u: goto label_128760;
            case 0x128764u: goto label_128764;
            case 0x128768u: goto label_128768;
            case 0x12876Cu: goto label_12876c;
            case 0x128770u: goto label_128770;
            case 0x128774u: goto label_128774;
            case 0x128778u: goto label_128778;
            case 0x12877Cu: goto label_12877c;
            case 0x128780u: goto label_128780;
            case 0x128784u: goto label_128784;
            case 0x128788u: goto label_128788;
            case 0x12878Cu: goto label_12878c;
            case 0x128790u: goto label_128790;
            case 0x128794u: goto label_128794;
            case 0x128798u: goto label_128798;
            case 0x12879Cu: goto label_12879c;
            case 0x1287A0u: goto label_1287a0;
            case 0x1287A4u: goto label_1287a4;
            case 0x1287A8u: goto label_1287a8;
            case 0x1287ACu: goto label_1287ac;
            case 0x1287B0u: goto label_1287b0;
            case 0x1287B4u: goto label_1287b4;
            case 0x1287B8u: goto label_1287b8;
            case 0x1287BCu: goto label_1287bc;
            case 0x1287C0u: goto label_1287c0;
            case 0x1287C4u: goto label_1287c4;
            case 0x1287C8u: goto label_1287c8;
            case 0x1287CCu: goto label_1287cc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1287c8:
    ctx->pc = 0x1287D0u;
}
