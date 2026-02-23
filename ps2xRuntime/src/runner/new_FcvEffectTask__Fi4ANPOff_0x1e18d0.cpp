#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_FcvEffectTask__Fi4ANPOff
// Address: 0x1e18d0 - 0x1e1a2c
void new_FcvEffectTask__Fi4ANPOff_0x1e18d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_FcvEffectTask__Fi4ANPOff");


    ctx->pc = 0x1e18d0u;

    // 0x1e18d0: 0x27bdff90
    ctx->pc = 0x1e18d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e18d4: 0x7fbf0040
    ctx->pc = 0x1e18d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1e18d8: 0x7fb20030
    ctx->pc = 0x1e18d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e18dc: 0x7fb10020
    ctx->pc = 0x1e18dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e18e0: 0x7fb00010
    ctx->pc = 0x1e18e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e18e4: 0xe7b50004
    ctx->pc = 0x1e18e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e18e8: 0xe7b40000
    ctx->pc = 0x1e18e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e18ec: 0xc4a30000
    ctx->pc = 0x1e18ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e18f0: 0xc4a20004
    ctx->pc = 0x1e18f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e18f4: 0xc4a10008
    ctx->pc = 0x1e18f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e18f8: 0xc4a0000c
    ctx->pc = 0x1e18f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e18fc: 0x27a20050
    ctx->pc = 0x1e18fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e1900: 0x46006d06
    ctx->pc = 0x1e1900u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1e1904: 0x70808628
    ctx->pc = 0x1e1904u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e1908: 0x46006546
    ctx->pc = 0x1e1908u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1e190c: 0xe4430000
    ctx->pc = 0x1e190cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e1910: 0xe4420004
    ctx->pc = 0x1e1910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e1914: 0xe4410008
    ctx->pc = 0x1e1914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e1918: 0xe440000c
    ctx->pc = 0x1e1918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1e191c: 0xc4a10010
    ctx->pc = 0x1e191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1920: 0xc4a00014
    ctx->pc = 0x1e1920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1924: 0xe4410010
    ctx->pc = 0x1e1924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1e1928: 0xe4400014
    ctx->pc = 0x1e1928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1e192c: 0xc078540
    ctx->pc = 0x1E192Cu;
    SET_GPR_U32(ctx, 31, 0x1E1934u);
    ctx->pc = 0x1E1930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E1500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeFcvEffect__Fi4ANPOf_0x1e1500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1934u; }
        else if (ctx->pc != 0x1E1934u) { ctx->pc = 0x1E1934u; }
    }
    if (ctx->pc != 0x1E1934u) { return; }
    ctx->pc = 0x1E1934u;
    // 0x1e1934: 0x14400035
    ctx->pc = 0x1E1934u;
    {
        const bool branch_taken_0x1e1934 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E1938u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1e1934) {
            ctx->pc = 0x1E1A0Cu;
            goto label_1e1a0c;
        }
    }
    ctx->pc = 0x1E193Cu;
    // 0x1e193c: 0x8423e504
    ctx->pc = 0x1e193cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1e1940: 0x2402000a
    ctx->pc = 0x1e1940u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e1944: 0x1462001e
    ctx->pc = 0x1E1944u;
    {
        const bool branch_taken_0x1e1944 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e1944) {
            ctx->pc = 0x1E19C0u;
            goto label_1e19c0;
        }
    }
    ctx->pc = 0x1E194Cu;
    // 0x1e194c: 0x8f838bcc
    ctx->pc = 0x1e194cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1e1950: 0x24020002
    ctx->pc = 0x1e1950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1954: 0x1462001a
    ctx->pc = 0x1E1954u;
    {
        const bool branch_taken_0x1e1954 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e1954) {
            ctx->pc = 0x1E19C0u;
            goto label_1e19c0;
        }
    }
    ctx->pc = 0x1E195Cu;
    // 0x1e195c: 0x8f928ccc
    ctx->pc = 0x1e195cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x1e1960: 0x12400003
    ctx->pc = 0x1E1960u;
    {
        const bool branch_taken_0x1e1960 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e1960) {
            ctx->pc = 0x1E1970u;
            goto label_1e1970;
        }
    }
    ctx->pc = 0x1E1968u;
    // 0x1e1968: 0x8e520000
    ctx->pc = 0x1e1968u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e196c: 0x0
    ctx->pc = 0x1e196cu;
    // NOP
label_1e1970:
    // 0x1e1970: 0xc06903c
    ctx->pc = 0x1E1970u;
    SET_GPR_U32(ctx, 31, 0x1E1978u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1978u; }
        else if (ctx->pc != 0x1E1978u) { ctx->pc = 0x1E1978u; }
    }
    if (ctx->pc != 0x1E1978u) { return; }
    ctx->pc = 0x1E1978u;
    // 0x1e1978: 0xc06903c
    ctx->pc = 0x1E1978u;
    SET_GPR_U32(ctx, 31, 0x1E1980u);
    ctx->pc = 0x1E197Cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1980u; }
        else if (ctx->pc != 0x1E1980u) { ctx->pc = 0x1E1980u; }
    }
    if (ctx->pc != 0x1E1980u) { return; }
    ctx->pc = 0x1E1980u;
    // 0x1e1980: 0x8c420010
    ctx->pc = 0x1e1980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e1984: 0x8e260010
    ctx->pc = 0x1e1984u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e1988: 0x72404628
    ctx->pc = 0x1e1988u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e198c: 0x2404016c
    ctx->pc = 0x1e198cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 364));
    // 0x1e1990: 0x8c470014
    ctx->pc = 0x1e1990u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e1994: 0xc069040
    ctx->pc = 0x1E1994u;
    SET_GPR_U32(ctx, 31, 0x1E199Cu);
    ctx->pc = 0x1E1998u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E199Cu; }
        else if (ctx->pc != 0x1E199Cu) { ctx->pc = 0x1E199Cu; }
    }
    if (ctx->pc != 0x1E199Cu) { return; }
    ctx->pc = 0x1E199Cu;
    // 0x1e199c: 0x70402628
    ctx->pc = 0x1e199cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e19a0: 0x1080001a
    ctx->pc = 0x1E19A0u;
    {
        const bool branch_taken_0x1e19a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E19A4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e19a0) {
            ctx->pc = 0x1E1A0Cu;
            goto label_1e1a0c;
        }
    }
    ctx->pc = 0x1E19A8u;
    // 0x1e19a8: 0x4600ab06
    ctx->pc = 0x1e19a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e19ac: 0x4600a346
    ctx->pc = 0x1e19acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1e19b0: 0xc0784a4
    ctx->pc = 0x1E19B0u;
    SET_GPR_U32(ctx, 31, 0x1E19B8u);
    ctx->pc = 0x1E19B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1E1290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13FcvEffectTaskFi4ANPOff_0x1e1290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19B8u; }
        else if (ctx->pc != 0x1E19B8u) { ctx->pc = 0x1E19B8u; }
    }
    if (ctx->pc != 0x1E19B8u) { return; }
    ctx->pc = 0x1E19B8u;
    // 0x1e19b8: 0x10000015
    ctx->pc = 0x1E19B8u;
    {
        const bool branch_taken_0x1e19b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E19BCu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1e19b8) {
            ctx->pc = 0x1E1A10u;
            goto label_1e1a10;
        }
    }
    ctx->pc = 0x1E19C0u;
label_1e19c0:
    // 0x1e19c0: 0xc06903c
    ctx->pc = 0x1E19C0u;
    SET_GPR_U32(ctx, 31, 0x1E19C8u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19C8u; }
        else if (ctx->pc != 0x1E19C8u) { ctx->pc = 0x1E19C8u; }
    }
    if (ctx->pc != 0x1E19C8u) { return; }
    ctx->pc = 0x1E19C8u;
    // 0x1e19c8: 0xc06903c
    ctx->pc = 0x1E19C8u;
    SET_GPR_U32(ctx, 31, 0x1E19D0u);
    ctx->pc = 0x1E19CCu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19D0u; }
        else if (ctx->pc != 0x1E19D0u) { ctx->pc = 0x1E19D0u; }
    }
    if (ctx->pc != 0x1E19D0u) { return; }
    ctx->pc = 0x1E19D0u;
    // 0x1e19d0: 0xc06903c
    ctx->pc = 0x1E19D0u;
    SET_GPR_U32(ctx, 31, 0x1E19D8u);
    ctx->pc = 0x1E19D4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19D8u; }
        else if (ctx->pc != 0x1E19D8u) { ctx->pc = 0x1E19D8u; }
    }
    if (ctx->pc != 0x1E19D8u) { return; }
    ctx->pc = 0x1E19D8u;
    // 0x1e19d8: 0x8e460010
    ctx->pc = 0x1e19d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e19dc: 0x8e270014
    ctx->pc = 0x1e19dcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e19e0: 0x2404016c
    ctx->pc = 0x1e19e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 364));
    // 0x1e19e4: 0x70002e28
    ctx->pc = 0x1e19e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e19e8: 0xc069040
    ctx->pc = 0x1E19E8u;
    SET_GPR_U32(ctx, 31, 0x1E19F0u);
    ctx->pc = 0x1E19ECu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19F0u; }
        else if (ctx->pc != 0x1E19F0u) { ctx->pc = 0x1E19F0u; }
    }
    if (ctx->pc != 0x1E19F0u) { return; }
    ctx->pc = 0x1E19F0u;
    // 0x1e19f0: 0x70402628
    ctx->pc = 0x1e19f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e19f4: 0x10800005
    ctx->pc = 0x1E19F4u;
    {
        const bool branch_taken_0x1e19f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E19F8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e19f4) {
            ctx->pc = 0x1E1A0Cu;
            goto label_1e1a0c;
        }
    }
    ctx->pc = 0x1E19FCu;
    // 0x1e19fc: 0x4600ab06
    ctx->pc = 0x1e19fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e1a00: 0x4600a346
    ctx->pc = 0x1e1a00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1e1a04: 0xc0784a4
    ctx->pc = 0x1E1A04u;
    SET_GPR_U32(ctx, 31, 0x1E1A0Cu);
    ctx->pc = 0x1E1A08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1E1290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13FcvEffectTaskFi4ANPOff_0x1e1290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A0Cu; }
        else if (ctx->pc != 0x1E1A0Cu) { ctx->pc = 0x1E1A0Cu; }
    }
    if (ctx->pc != 0x1E1A0Cu) { return; }
    ctx->pc = 0x1E1A0Cu;
label_1e1a0c:
    // 0x1e1a0c: 0x7bbf0040
    ctx->pc = 0x1e1a0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e1a10:
    // 0x1e1a10: 0x7bb20030
    ctx->pc = 0x1e1a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1a14: 0x7bb10020
    ctx->pc = 0x1e1a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1a18: 0x7bb00010
    ctx->pc = 0x1e1a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1a1c: 0xc7b50004
    ctx->pc = 0x1e1a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e1a20: 0xc7b40000
    ctx->pc = 0x1e1a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e1a24: 0x3e00008
    ctx->pc = 0x1E1A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1A28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1970u: goto label_1e1970;
            case 0x1E19C0u: goto label_1e19c0;
            case 0x1E1A0Cu: goto label_1e1a0c;
            case 0x1E1A10u: goto label_1e1a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1A2Cu;
}
