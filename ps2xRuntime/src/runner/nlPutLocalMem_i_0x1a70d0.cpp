#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPutLocalMem_i
// Address: 0x1a70d0 - 0x1a7280
void nlPutLocalMem_i_0x1a70d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPutLocalMem_i");


    ctx->pc = 0x1a70d0u;

    // 0x1a70d0: 0x27bdff30
    ctx->pc = 0x1a70d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1a70d4: 0x7fbf0030
    ctx->pc = 0x1a70d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1a70d8: 0x7fb20020
    ctx->pc = 0x1a70d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a70dc: 0x7fb10010
    ctx->pc = 0x1a70dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a70e0: 0x7fb00000
    ctx->pc = 0x1a70e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a70e4: 0x70809628
    ctx->pc = 0x1a70e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a70e8: 0x84840008
    ctx->pc = 0x1a70e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a70ec: 0xc069dc4
    ctx->pc = 0x1A70ECu;
    SET_GPR_U32(ctx, 31, 0x1A70F4u);
    ctx->pc = 0x1A70F0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A7710u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_byte_per_pxl_0x1a7710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A70F4u; }
        else if (ctx->pc != 0x1A70F4u) { ctx->pc = 0x1A70F4u; }
    }
    if (ctx->pc != 0x1A70F4u) { return; }
    ctx->pc = 0x1A70F4u;
    // 0x1a70f4: 0x70408628
    ctx->pc = 0x1a70f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a70f8: 0x3c021000
    ctx->pc = 0x1a70f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1a70fc: 0x34420006
    ctx->pc = 0x1a70fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 6));
    // 0x1a7100: 0xafa20040
    ctx->pc = 0x1a7100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1a7104: 0xafa00044
    ctx->pc = 0x1a7104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1a7108: 0x3c025100
    ctx->pc = 0x1a7108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20736 << 16));
    // 0x1a710c: 0xafa00048
    ctx->pc = 0x1a710cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1a7110: 0x34420006
    ctx->pc = 0x1a7110u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 6));
    // 0x1a7114: 0xafa2004c
    ctx->pc = 0x1a7114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1a7118: 0x86450004
    ctx->pc = 0x1a7118u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a711c: 0x86460006
    ctx->pc = 0x1a711cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1a7120: 0x86470008
    ctx->pc = 0x1a7120u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a7124: 0x8648000a
    ctx->pc = 0x1a7124u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1a7128: 0x8649000c
    ctx->pc = 0x1a7128u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1a712c: 0x864a000e
    ctx->pc = 0x1a712cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1a7130: 0x864b0010
    ctx->pc = 0x1a7130u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a7134: 0xc054eaa
    ctx->pc = 0x1A7134u;
    SET_GPR_U32(ctx, 31, 0x1A713Cu);
    ctx->pc = 0x1A7138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x153AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefLoadImage_0x153aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A713Cu; }
        else if (ctx->pc != 0x1A713Cu) { ctx->pc = 0x1A713Cu; }
    }
    if (ctx->pc != 0x1A713Cu) { return; }
    ctx->pc = 0x1A713Cu;
    // 0x1a713c: 0x97a30080
    ctx->pc = 0x1a713cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a7140: 0x97a20084
    ctx->pc = 0x1a7140u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1a7144: 0x30630fff
    ctx->pc = 0x1a7144u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4095));
    // 0x1a7148: 0x30420fff
    ctx->pc = 0x1a7148u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x1a714c: 0x621018
    ctx->pc = 0x1a714cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1a7150: 0x2021018
    ctx->pc = 0x1a7150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1a7154: 0x4410003
    ctx->pc = 0x1A7154u;
    {
        const bool branch_taken_0x1a7154 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A7158u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        if (branch_taken_0x1a7154) {
            ctx->pc = 0x1A7164u;
            goto label_1a7164;
        }
    }
    ctx->pc = 0x1A715Cu;
    // 0x1a715c: 0x2442000f
    ctx->pc = 0x1a715cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15));
    // 0x1a7160: 0x22103
    ctx->pc = 0x1a7160u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_1a7164:
    // 0x1a7164: 0x8e450000
    ctx->pc = 0x1a7164u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a7168: 0x3c037000
    ctx->pc = 0x1a7168u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x1a716c: 0xa31024
    ctx->pc = 0x1a716cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a7170: 0x14430002
    ctx->pc = 0x1A7170u;
    {
        const bool branch_taken_0x1a7170 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A7174u;
        SET_GPR_U32(ctx, 2, ((uint32_t)61440 << 16));
        if (branch_taken_0x1a7170) {
            ctx->pc = 0x1A717Cu;
            goto label_1a717c;
        }
    }
    ctx->pc = 0x1A7178u;
    // 0x1a7178: 0xa22825
    ctx->pc = 0x1a7178u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a717c:
    // 0x1a717c: 0x12200009
    ctx->pc = 0x1A717Cu;
    {
        const bool branch_taken_0x1a717c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7180u;
        SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
        if (branch_taken_0x1a717c) {
            ctx->pc = 0x1A71A4u;
            goto label_1a71a4;
        }
    }
    ctx->pc = 0x1A7184u;
    // 0x1a7184: 0xafa200c0
    ctx->pc = 0x1a7184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1a7188: 0xafa000c4
    ctx->pc = 0x1a7188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x1a718c: 0xafa000c8
    ctx->pc = 0x1a718cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1a7190: 0x3c024000
    ctx->pc = 0x1a7190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1a7194: 0xafa000cc
    ctx->pc = 0x1a7194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x1a7198: 0x821025
    ctx->pc = 0x1a7198u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a719c: 0x10000002
    ctx->pc = 0x1A719Cu;
    {
        const bool branch_taken_0x1a719c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A71A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        if (branch_taken_0x1a719c) {
            ctx->pc = 0x1A71A8u;
            goto label_1a71a8;
        }
    }
    ctx->pc = 0x1A71A4u;
label_1a71a4:
    // 0x1a71a4: 0xafa400b0
    ctx->pc = 0x1a71a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_1a71a8:
    // 0x1a71a8: 0xafa500b4
    ctx->pc = 0x1a71a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
    // 0x1a71ac: 0x3c025100
    ctx->pc = 0x1a71acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)20736 << 16));
    // 0x1a71b0: 0x821025
    ctx->pc = 0x1a71b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a71b4: 0xafa000b8
    ctx->pc = 0x1a71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x1a71b8: 0xafa200bc
    ctx->pc = 0x1a71b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1a71bc: 0xc0552d8
    ctx->pc = 0x1A71BCu;
    SET_GPR_U32(ctx, 31, 0x1A71C4u);
    ctx->pc = 0x1A71C0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A71C4u; }
        else if (ctx->pc != 0x1A71C4u) { ctx->pc = 0x1A71C4u; }
    }
    if (ctx->pc != 0x1A71C4u) { return; }
    ctx->pc = 0x1A71C4u;
    // 0x1a71c4: 0x3c041000
    ctx->pc = 0x1a71c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1a71c8: 0x34859000
    ctx->pc = 0x1a71c8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), 36864));
label_1a71cc:
    // 0x1a71cc: 0x8ca30000
    ctx->pc = 0x1a71ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a71d0: 0x30630100
    ctx->pc = 0x1a71d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1a71d4: 0x0
    ctx->pc = 0x1a71d4u;
    // NOP
    // 0x1a71d8: 0x0
    ctx->pc = 0x1a71d8u;
    // NOP
    // 0x1a71dc: 0x0
    ctx->pc = 0x1a71dcu;
    // NOP
    // 0x1a71e0: 0x1460fffa
    ctx->pc = 0x1A71E0u;
    {
        const bool branch_taken_0x1a71e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a71e0) {
            ctx->pc = 0x1A71CCu;
            goto label_1a71cc;
        }
    }
    ctx->pc = 0x1A71E8u;
    // 0x1a71e8: 0x27a30040
    ctx->pc = 0x1a71e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a71ec: 0x34859030
    ctx->pc = 0x1a71ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), 36912));
    // 0x1a71f0: 0xaca30000
    ctx->pc = 0x1a71f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a71f4: 0x34839020
    ctx->pc = 0x1a71f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 36896));
    // 0x1a71f8: 0xac600000
    ctx->pc = 0x1a71f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1a71fc: 0x3c011001
    ctx->pc = 0x1a71fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a7200: 0x8c239000
    ctx->pc = 0x1a7200u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938624))); // MMIO: 0x10009000
    // 0x1a7204: 0x2404fff2
    ctx->pc = 0x1a7204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x1a7208: 0x641824
    ctx->pc = 0x1a7208u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a720c: 0x34630105
    ctx->pc = 0x1a720cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 261));
    // 0x1a7210: 0x3c011001
    ctx->pc = 0x1a7210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a7214: 0xac239000
    ctx->pc = 0x1a7214u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938624), GPR_U32(ctx, 3)); // MMIO: 0x10009000
label_1a7218:
    // 0x1a7218: 0x3c011001
    ctx->pc = 0x1a7218u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a721c: 0x8c239000
    ctx->pc = 0x1a721cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938624))); // MMIO: 0x10009000
    // 0x1a7220: 0x30630100
    ctx->pc = 0x1a7220u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1a7224: 0x0
    ctx->pc = 0x1a7224u;
    // NOP
    // 0x1a7228: 0x0
    ctx->pc = 0x1a7228u;
    // NOP
    // 0x1a722c: 0x1460fffa
    ctx->pc = 0x1A722Cu;
    {
        const bool branch_taken_0x1a722c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a722c) {
            ctx->pc = 0x1A7218u;
            goto label_1a7218;
        }
    }
    ctx->pc = 0x1A7234u;
    // 0x1a7234: 0x3c030026
    ctx->pc = 0x1a7234u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1a7238: 0x2463f410
    ctx->pc = 0x1a7238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964240));
    // 0x1a723c: 0x3c011001
    ctx->pc = 0x1a723cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a7240: 0xac239030
    ctx->pc = 0x1a7240u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938672), GPR_U32(ctx, 3)); // MMIO: 0x10009030
    // 0x1a7244: 0x3c011001
    ctx->pc = 0x1a7244u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a7248: 0xac209020
    ctx->pc = 0x1a7248u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938656), GPR_U32(ctx, 0)); // MMIO: 0x10009020
    // 0x1a724c: 0x3c011001
    ctx->pc = 0x1a724cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a7250: 0x8c249000
    ctx->pc = 0x1a7250u;
    SET_GPR_U32(ctx, 4, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938624))); // MMIO: 0x10009000
    // 0x1a7254: 0x2403fff2
    ctx->pc = 0x1a7254u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x1a7258: 0x831824
    ctx->pc = 0x1a7258u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a725c: 0x34630105
    ctx->pc = 0x1a725cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 261));
    // 0x1a7260: 0x3c011001
    ctx->pc = 0x1a7260u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a7264: 0xac239000
    ctx->pc = 0x1a7264u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938624), GPR_U32(ctx, 3)); // MMIO: 0x10009000
    // 0x1a7268: 0x7bbf0030
    ctx->pc = 0x1a7268u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a726c: 0x7bb20020
    ctx->pc = 0x1a726cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7270: 0x7bb10010
    ctx->pc = 0x1a7270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7274: 0x7bb00000
    ctx->pc = 0x1a7274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7278: 0x3e00008
    ctx->pc = 0x1A7278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A727Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7164u: goto label_1a7164;
            case 0x1A717Cu: goto label_1a717c;
            case 0x1A71A4u: goto label_1a71a4;
            case 0x1A71A8u: goto label_1a71a8;
            case 0x1A71CCu: goto label_1a71cc;
            case 0x1A7218u: goto label_1a7218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7280u;
}
