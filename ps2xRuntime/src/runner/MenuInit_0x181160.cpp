#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MenuInit
// Address: 0x181160 - 0x1812c0
void MenuInit_0x181160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MenuInit_0x181160");
#endif

    ctx->pc = 0x181160u;

    // 0x181160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181164: 0x24040145  addiu       $a0, $zero, 0x145
    ctx->pc = 0x181164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x181168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18116c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x18116cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x181170: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181174: 0xc05c20c  jal         func_170830
    ctx->pc = 0x181174u;
    SET_GPR_U32(ctx, 31, 0x18117Cu);
    ctx->pc = 0x181178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181174u;
            // 0x181178: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18117Cu; }
        if (ctx->pc != 0x18117Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18117Cu; }
        if (ctx->pc != 0x18117Cu) { return; }
    }
    ctx->pc = 0x18117Cu;
    // 0x18117c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18117Cu;
    SET_GPR_U32(ctx, 31, 0x181184u);
    ctx->pc = 0x181180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18117Cu;
            // 0x181180: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181184u; }
        if (ctx->pc != 0x181184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181184u; }
        if (ctx->pc != 0x181184u) { return; }
    }
    ctx->pc = 0x181184u;
    // 0x181184: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x181184u;
    SET_GPR_U32(ctx, 31, 0x18118Cu);
    ctx->pc = 0x181188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181184u;
            // 0x181188: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18118Cu; }
        if (ctx->pc != 0x18118Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18118Cu; }
        if (ctx->pc != 0x18118Cu) { return; }
    }
    ctx->pc = 0x18118Cu;
    // 0x18118c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18118cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x181190: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x181190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x181194: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181198: 0xc05c20c  jal         func_170830
    ctx->pc = 0x181198u;
    SET_GPR_U32(ctx, 31, 0x1811A0u);
    ctx->pc = 0x18119Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181198u;
            // 0x18119c: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811A0u; }
        if (ctx->pc != 0x1811A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811A0u; }
        if (ctx->pc != 0x1811A0u) { return; }
    }
    ctx->pc = 0x1811A0u;
    // 0x1811a0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1811A0u;
    SET_GPR_U32(ctx, 31, 0x1811A8u);
    ctx->pc = 0x1811A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1811A0u;
            // 0x1811a4: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811A8u; }
        if (ctx->pc != 0x1811A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811A8u; }
        if (ctx->pc != 0x1811A8u) { return; }
    }
    ctx->pc = 0x1811A8u;
    // 0x1811a8: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1811A8u;
    SET_GPR_U32(ctx, 31, 0x1811B0u);
    ctx->pc = 0x1811ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1811A8u;
            // 0x1811ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811B0u; }
        if (ctx->pc != 0x1811B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811B0u; }
        if (ctx->pc != 0x1811B0u) { return; }
    }
    ctx->pc = 0x1811B0u;
    // 0x1811b0: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x1811b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1811b4: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x1811B4u;
    SET_GPR_U32(ctx, 31, 0x1811BCu);
    ctx->pc = 0x1811B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1811B4u;
            // 0x1811b8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811BCu; }
        if (ctx->pc != 0x1811BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811BCu; }
        if (ctx->pc != 0x1811BCu) { return; }
    }
    ctx->pc = 0x1811BCu;
    // 0x1811bc: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x1811bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1811c0: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x1811C0u;
    SET_GPR_U32(ctx, 31, 0x1811C8u);
    ctx->pc = 0x1811C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1811C0u;
            // 0x1811c4: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811C8u; }
        if (ctx->pc != 0x1811C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811C8u; }
        if (ctx->pc != 0x1811C8u) { return; }
    }
    ctx->pc = 0x1811C8u;
    // 0x1811c8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1811c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1811cc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x1811ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x1811d0: 0xac202b20  sw          $zero, 0x2B20($at)
    ctx->pc = 0x1811d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11040), GPR_U32(ctx, 0));
    // 0x1811d4: 0x3c03c362  lui         $v1, 0xC362
    ctx->pc = 0x1811d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50018 << 16));
    // 0x1811d8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1811d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1811dc: 0x24843c50  addiu       $a0, $a0, 0x3C50
    ctx->pc = 0x1811dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15440));
    // 0x1811e0: 0xac232b18  sw          $v1, 0x2B18($at)
    ctx->pc = 0x1811e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11032), GPR_U32(ctx, 3));
    // 0x1811e4: 0x3c03c324  lui         $v1, 0xC324
    ctx->pc = 0x1811e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49956 << 16));
    // 0x1811e8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1811e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1811ec: 0xac232b10  sw          $v1, 0x2B10($at)
    ctx->pc = 0x1811ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11024), GPR_U32(ctx, 3));
    // 0x1811f0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1811f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x1811f4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1811f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1811f8: 0xac2327d8  sw          $v1, 0x27D8($at)
    ctx->pc = 0x1811f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10200), GPR_U32(ctx, 3));
    // 0x1811fc: 0x3c03c180  lui         $v1, 0xC180
    ctx->pc = 0x1811fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49536 << 16));
    // 0x181200: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181204: 0xac232b00  sw          $v1, 0x2B00($at)
    ctx->pc = 0x181204u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11008), GPR_U32(ctx, 3));
    // 0x181208: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x181208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18120c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x18120cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181210: 0xa0233c90  sb          $v1, 0x3C90($at)
    ctx->pc = 0x181210u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15504), (uint8_t)GPR_U32(ctx, 3));
    // 0x181214: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181218: 0x3c03c380  lui         $v1, 0xC380
    ctx->pc = 0x181218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50048 << 16));
    // 0x18121c: 0xac202b08  sw          $zero, 0x2B08($at)
    ctx->pc = 0x18121cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11016), GPR_U32(ctx, 0));
    // 0x181220: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x181220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181224: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181228: 0xac2027e8  sw          $zero, 0x27E8($at)
    ctx->pc = 0x181228u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10216), GPR_U32(ctx, 0));
    // 0x18122c: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x18122cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    // 0x181230: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181234: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x181234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x181238: 0xac2027f0  sw          $zero, 0x27F0($at)
    ctx->pc = 0x181238u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10224), GPR_U32(ctx, 0));
    // 0x18123c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x18123cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181240: 0xa0203c88  sb          $zero, 0x3C88($at)
    ctx->pc = 0x181240u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15496), (uint8_t)GPR_U32(ctx, 0));
    // 0x181244: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x181244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x181248: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x181248u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65280u)));
    // 0x18124c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x18124cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181250: 0xa0203c80  sb          $zero, 0x3C80($at)
    ctx->pc = 0x181250u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15488), (uint8_t)GPR_U32(ctx, 0));
    // 0x181254: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x181254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x181258: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18125c: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x18125Cu;
    SET_GPR_U32(ctx, 31, 0x181264u);
    ctx->pc = 0x181260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18125Cu;
            // 0x181260: 0xa0203c78  sb          $zero, 0x3C78($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 15480), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181264u; }
        if (ctx->pc != 0x181264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181264u; }
        if (ctx->pc != 0x181264u) { return; }
    }
    ctx->pc = 0x181264u;
    // 0x181264: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x181264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x181268: 0x3c044360  lui         $a0, 0x4360
    ctx->pc = 0x181268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17248 << 16));
    // 0x18126c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x18126cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181270: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x181270u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x181274: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x181274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x181278: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x181278u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65280u)));
    // 0x18127c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x18127cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x181280: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x181280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x181284: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x181284u;
    SET_GPR_U32(ctx, 31, 0x18128Cu);
    ctx->pc = 0x181288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181284u;
            // 0x181288: 0x24843c60  addiu       $a0, $a0, 0x3C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18128Cu; }
        if (ctx->pc != 0x18128Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18128Cu; }
        if (ctx->pc != 0x18128Cu) { return; }
    }
    ctx->pc = 0x18128Cu;
    // 0x18128c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x18128cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x181290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181294: 0x24843c30  addiu       $a0, $a0, 0x3C30
    ctx->pc = 0x181294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15408));
    // 0x181298: 0xc05f824  jal         func_17E090
    ctx->pc = 0x181298u;
    SET_GPR_U32(ctx, 31, 0x1812A0u);
    ctx->pc = 0x18129Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181298u;
            // 0x18129c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E090u;
    if (runtime->hasFunction(0x17E090u)) {
        auto targetFn = runtime->lookupFunction(0x17E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812A0u; }
        if (ctx->pc != 0x1812A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x17e090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812A0u; }
        if (ctx->pc != 0x1812A0u) { return; }
    }
    ctx->pc = 0x1812A0u;
    // 0x1812a0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x1812a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x1812a4: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1812a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1812a8: 0x24843c40  addiu       $a0, $a0, 0x3C40
    ctx->pc = 0x1812a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15424));
    // 0x1812ac: 0xc05f824  jal         func_17E090
    ctx->pc = 0x1812ACu;
    SET_GPR_U32(ctx, 31, 0x1812B4u);
    ctx->pc = 0x1812B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1812ACu;
            // 0x1812b0: 0x240601c0  addiu       $a2, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E090u;
    if (runtime->hasFunction(0x17E090u)) {
        auto targetFn = runtime->lookupFunction(0x17E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812B4u; }
        if (ctx->pc != 0x1812B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x17e090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1812B4u; }
        if (ctx->pc != 0x1812B4u) { return; }
    }
    ctx->pc = 0x1812B4u;
    // 0x1812b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1812b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1812b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1812B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1812BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1812B8u;
            // 0x1812bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1812C0u;
}
