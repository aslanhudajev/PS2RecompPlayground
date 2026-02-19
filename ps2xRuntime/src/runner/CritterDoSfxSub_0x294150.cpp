#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDoSfxSub
// Address: 0x294150 - 0x2943d0
void CritterDoSfxSub_0x294150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x294150u;

    // 0x294150: 0x27bdffa0
    ctx->pc = 0x294150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x294154: 0xffbf0050
    ctx->pc = 0x294154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x294158: 0xffb40040
    ctx->pc = 0x294158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29415c: 0xffb30030
    ctx->pc = 0x29415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x294160: 0xffb20020
    ctx->pc = 0x294160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x294164: 0xffb10010
    ctx->pc = 0x294164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294168: 0xffb00000
    ctx->pc = 0x294168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29416c: 0x80902d
    ctx->pc = 0x29416cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294170: 0xa0982d
    ctx->pc = 0x294170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294174: 0xc0282d
    ctx->pc = 0x294174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294178: 0xe0a02d
    ctx->pc = 0x294178u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29417c: 0x8e620008
    ctx->pc = 0x29417cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x294180: 0x4400089
    ctx->pc = 0x294180u;
    {
        const bool branch_taken_0x294180 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x294184u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x294180) {
            ctx->pc = 0x2943A8u;
            goto label_2943a8;
        }
    }
    ctx->pc = 0x294188u;
    // 0x294188: 0x24070800
    ctx->pc = 0x294188u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29418c: 0x32020004
    ctx->pc = 0x29418cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4));
    // 0x294190: 0x10400003
    ctx->pc = 0x294190u;
    {
        const bool branch_taken_0x294190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294194u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x294190) {
            ctx->pc = 0x2941A0u;
            goto label_2941a0;
        }
    }
    ctx->pc = 0x294198u;
    // 0x294198: 0x3c070008
    ctx->pc = 0x294198u;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
    // 0x29419c: 0x34e70880
    ctx->pc = 0x29419cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2176));
label_2941a0:
    // 0x2941a0: 0x3c020010
    ctx->pc = 0x2941a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x2941a4: 0x2021024
    ctx->pc = 0x2941a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2941a8: 0x10400003
    ctx->pc = 0x2941A8u;
    {
        const bool branch_taken_0x2941a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2941ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
        if (branch_taken_0x2941a8) {
            ctx->pc = 0x2941B8u;
            goto label_2941b8;
        }
    }
    ctx->pc = 0x2941B0u;
    // 0x2941b0: 0x34420040
    ctx->pc = 0x2941b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
    // 0x2941b4: 0xe23825
    ctx->pc = 0x2941b4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2941b8:
    // 0x2941b8: 0x32021000
    ctx->pc = 0x2941b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4096));
    // 0x2941bc: 0x10400003
    ctx->pc = 0x2941BCu;
    {
        const bool branch_taken_0x2941bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2941C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
        if (branch_taken_0x2941bc) {
            ctx->pc = 0x2941CCu;
            goto label_2941cc;
        }
    }
    ctx->pc = 0x2941C4u;
    // 0x2941c4: 0x34421000
    ctx->pc = 0x2941c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4096));
    // 0x2941c8: 0xe23825
    ctx->pc = 0x2941c8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2941cc:
    // 0x2941cc: 0x3c020008
    ctx->pc = 0x2941ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x2941d0: 0x2021024
    ctx->pc = 0x2941d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2941d4: 0x10400002
    ctx->pc = 0x2941D4u;
    {
        const bool branch_taken_0x2941d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2941D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x2941d4) {
            ctx->pc = 0x2941E0u;
            goto label_2941e0;
        }
    }
    ctx->pc = 0x2941DCu;
    // 0x2941dc: 0xe23825
    ctx->pc = 0x2941dcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2941e0:
    // 0x2941e0: 0x32022000
    ctx->pc = 0x2941e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 8192));
    // 0x2941e4: 0x10400002
    ctx->pc = 0x2941E4u;
    {
        const bool branch_taken_0x2941e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2941E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294965247));
        if (branch_taken_0x2941e4) {
            ctx->pc = 0x2941F0u;
            goto label_2941f0;
        }
    }
    ctx->pc = 0x2941ECu;
    // 0x2941ec: 0xe23824
    ctx->pc = 0x2941ecu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2941f0:
    // 0x2941f0: 0x32020010
    ctx->pc = 0x2941f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 16));
    // 0x2941f4: 0x10400002
    ctx->pc = 0x2941F4u;
    {
        const bool branch_taken_0x2941f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2941F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
        if (branch_taken_0x2941f4) {
            ctx->pc = 0x294200u;
            goto label_294200;
        }
    }
    ctx->pc = 0x2941FCu;
    // 0x2941fc: 0xc23025
    ctx->pc = 0x2941fcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_294200:
    // 0x294200: 0x32028000
    ctx->pc = 0x294200u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 32768));
    // 0x294204: 0x10400007
    ctx->pc = 0x294204u;
    {
        const bool branch_taken_0x294204 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294208u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x294204) {
            ctx->pc = 0x294224u;
            goto label_294224;
        }
    }
    ctx->pc = 0x29420Cu;
    // 0x29420c: 0x8c43e7f0
    ctx->pc = 0x29420cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x294210: 0x24020008
    ctx->pc = 0x294210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x294214: 0x14620002
    ctx->pc = 0x294214u;
    {
        const bool branch_taken_0x294214 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x294218u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        if (branch_taken_0x294214) {
            ctx->pc = 0x294220u;
            goto label_294220;
        }
    }
    ctx->pc = 0x29421Cu;
    // 0x29421c: 0x3c020800
    ctx->pc = 0x29421cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2048 << 16));
label_294220:
    // 0x294220: 0xc23025
    ctx->pc = 0x294220u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_294224:
    // 0x294224: 0x3c020001
    ctx->pc = 0x294224u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x294228: 0x2021024
    ctx->pc = 0x294228u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29422c: 0x10400002
    ctx->pc = 0x29422Cu;
    {
        const bool branch_taken_0x29422c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294230u;
        SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
        if (branch_taken_0x29422c) {
            ctx->pc = 0x294238u;
            goto label_294238;
        }
    }
    ctx->pc = 0x294234u;
    // 0x294234: 0xc23025
    ctx->pc = 0x294234u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_294238:
    // 0x294238: 0x3c020002
    ctx->pc = 0x294238u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x29423c: 0x2021024
    ctx->pc = 0x29423cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x294240: 0x10400002
    ctx->pc = 0x294240u;
    {
        const bool branch_taken_0x294240 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294244u;
        SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
        if (branch_taken_0x294240) {
            ctx->pc = 0x29424Cu;
            goto label_29424c;
        }
    }
    ctx->pc = 0x294248u;
    // 0x294248: 0xc23025
    ctx->pc = 0x294248u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_29424c:
    // 0x29424c: 0x3c020040
    ctx->pc = 0x29424cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x294250: 0x2021024
    ctx->pc = 0x294250u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x294254: 0x10400002
    ctx->pc = 0x294254u;
    {
        const bool branch_taken_0x294254 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294258u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1024 << 16));
        if (branch_taken_0x294254) {
            ctx->pc = 0x294260u;
            goto label_294260;
        }
    }
    ctx->pc = 0x29425Cu;
    // 0x29425c: 0xc23025
    ctx->pc = 0x29425cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_294260:
    // 0x294260: 0x3c020080
    ctx->pc = 0x294260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x294264: 0x2021024
    ctx->pc = 0x294264u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x294268: 0x10400002
    ctx->pc = 0x294268u;
    {
        const bool branch_taken_0x294268 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29426Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
        if (branch_taken_0x294268) {
            ctx->pc = 0x294274u;
            goto label_294274;
        }
    }
    ctx->pc = 0x294270u;
    // 0x294270: 0xc23025
    ctx->pc = 0x294270u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_294274:
    // 0x294274: 0x8e640008
    ctx->pc = 0x294274u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x294278: 0xc09f5fa
    ctx->pc = 0x294278u;
    SET_GPR_U32(ctx, 31, 0x294280u);
    ctx->pc = 0x29427Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294280u; }
    }
    if (ctx->pc != 0x294280u) { return; }
    ctx->pc = 0x294280u;
    // 0x294280: 0x40882d
    ctx->pc = 0x294280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294284: 0x96450002
    ctx->pc = 0x294284u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x294288: 0x34a51000
    ctx->pc = 0x294288u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4096));
    // 0x29428c: 0x52c00
    ctx->pc = 0x29428cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x294290: 0x220202d
    ctx->pc = 0x294290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294294: 0xc09f81a
    ctx->pc = 0x294294u;
    SET_GPR_U32(ctx, 31, 0x29429Cu);
    ctx->pc = 0x294298u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->pc = 0x27E068u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetOwner_0x27e068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29429Cu; }
    }
    if (ctx->pc != 0x29429Cu) { return; }
    ctx->pc = 0x29429Cu;
    // 0x29429c: 0x32022000
    ctx->pc = 0x29429cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 8192));
    // 0x2942a0: 0x10400006
    ctx->pc = 0x2942A0u;
    {
        const bool branch_taken_0x2942a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2942A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2942a0) {
            ctx->pc = 0x2942BCu;
            goto label_2942bc;
        }
    }
    ctx->pc = 0x2942A8u;
    // 0x2942a8: 0x220202d
    ctx->pc = 0x2942a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942ac: 0xc09f732
    ctx->pc = 0x2942ACu;
    SET_GPR_U32(ctx, 31, 0x2942B4u);
    ctx->pc = 0x2942B0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294953380)));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942B4u; }
    }
    if (ctx->pc != 0x2942B4u) { return; }
    ctx->pc = 0x2942B4u;
    // 0x2942b4: 0x10000016
    ctx->pc = 0x2942B4u;
    {
        const bool branch_taken_0x2942b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2942B8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 72)));
        if (branch_taken_0x2942b4) {
            ctx->pc = 0x294310u;
            goto label_294310;
        }
    }
    ctx->pc = 0x2942BCu;
label_2942bc:
    // 0x2942bc: 0x32020040
    ctx->pc = 0x2942bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 64));
    // 0x2942c0: 0x10400006
    ctx->pc = 0x2942C0u;
    {
        const bool branch_taken_0x2942c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2942C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2942c0) {
            ctx->pc = 0x2942DCu;
            goto label_2942dc;
        }
    }
    ctx->pc = 0x2942C8u;
    // 0x2942c8: 0x8e450070
    ctx->pc = 0x2942c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2942cc: 0xc09f748
    ctx->pc = 0x2942CCu;
    SET_GPR_U32(ctx, 31, 0x2942D4u);
    ctx->pc = 0x2942D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DD20u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMat_0x27dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942D4u; }
    }
    if (ctx->pc != 0x2942D4u) { return; }
    ctx->pc = 0x2942D4u;
    // 0x2942d4: 0x1000000e
    ctx->pc = 0x2942D4u;
    {
        const bool branch_taken_0x2942d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2942D8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 72)));
        if (branch_taken_0x2942d4) {
            ctx->pc = 0x294310u;
            goto label_294310;
        }
    }
    ctx->pc = 0x2942DCu;
label_2942dc:
    // 0x2942dc: 0x1280000b
    ctx->pc = 0x2942DCu;
    {
        const bool branch_taken_0x2942dc = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2942E0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 2048));
        if (branch_taken_0x2942dc) {
            ctx->pc = 0x29430Cu;
            goto label_29430c;
        }
    }
    ctx->pc = 0x2942E4u;
    // 0x2942e4: 0x10400004
    ctx->pc = 0x2942E4u;
    {
        const bool branch_taken_0x2942e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2942E8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2942e4) {
            ctx->pc = 0x2942F8u;
            goto label_2942f8;
        }
    }
    ctx->pc = 0x2942ECu;
    // 0x2942ec: 0x8e4200cc
    ctx->pc = 0x2942ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x2942f0: 0x10000004
    ctx->pc = 0x2942F0u;
    {
        const bool branch_taken_0x2942f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2942F4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 116)));
        if (branch_taken_0x2942f0) {
            ctx->pc = 0x294304u;
            goto label_294304;
        }
    }
    ctx->pc = 0x2942F8u;
label_2942f8:
    // 0x2942f8: 0x50400002
    ctx->pc = 0x2942F8u;
    {
        const bool branch_taken_0x2942f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2942f8) {
            ctx->pc = 0x2942FCu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->pc = 0x294304u;
            goto label_294304;
        }
    }
    ctx->pc = 0x294300u;
    // 0x294300: 0x8e4500cc
    ctx->pc = 0x294300u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_294304:
    // 0x294304: 0xc09f732
    ctx->pc = 0x294304u;
    SET_GPR_U32(ctx, 31, 0x29430Cu);
    ctx->pc = 0x294308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29430Cu; }
    }
    if (ctx->pc != 0x29430Cu) { return; }
    ctx->pc = 0x29430Cu;
label_29430c:
    // 0x29430c: 0x8e650048
    ctx->pc = 0x29430cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_294310:
    // 0x294310: 0x3c02ffff
    ctx->pc = 0x294310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x294314: 0x3442ffff
    ctx->pc = 0x294314u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x294318: 0x10a20009
    ctx->pc = 0x294318u;
    {
        const bool branch_taken_0x294318 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x29431Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x294318) {
            ctx->pc = 0x294340u;
            goto label_294340;
        }
    }
    ctx->pc = 0x294320u;
    // 0x294320: 0x24630eb0
    ctx->pc = 0x294320u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x294324: 0x240200f0
    ctx->pc = 0x294324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x294328: 0x2221018
    ctx->pc = 0x294328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29432c: 0x431021
    ctx->pc = 0x29432cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294330: 0x8c420018
    ctx->pc = 0x294330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x294334: 0x8c440000
    ctx->pc = 0x294334u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294338: 0xc0b4180
    ctx->pc = 0x294338u;
    SET_GPR_U32(ctx, 31, 0x294340u);
    ctx->pc = 0x29433Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0600u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetColor_0x2d0600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294340u; }
    }
    if (ctx->pc != 0x294340u) { return; }
    ctx->pc = 0x294340u;
label_294340:
    // 0x294340: 0x8e440070
    ctx->pc = 0x294340u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x294344: 0x10800007
    ctx->pc = 0x294344u;
    {
        const bool branch_taken_0x294344 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x294348u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        if (branch_taken_0x294344) {
            ctx->pc = 0x294364u;
            goto label_294364;
        }
    }
    ctx->pc = 0x29434Cu;
    // 0x29434c: 0x8c820060
    ctx->pc = 0x29434cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x294350: 0x30420008
    ctx->pc = 0x294350u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x294354: 0x10400003
    ctx->pc = 0x294354u;
    {
        const bool branch_taken_0x294354 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x294354) {
            ctx->pc = 0x294364u;
            goto label_294364;
        }
    }
    ctx->pc = 0x29435Cu;
    // 0x29435c: 0xc4800044
    ctx->pc = 0x29435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294360: 0x46007382
    ctx->pc = 0x294360u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_294364:
    // 0x294364: 0x3c013f80
    ctx->pc = 0x294364u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x294368: 0x44810000
    ctx->pc = 0x294368u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29436c: 0x46007032
    ctx->pc = 0x29436cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294370: 0x0
    ctx->pc = 0x294370u;
    // NOP
    // 0x294374: 0x4501000e
    ctx->pc = 0x294374u;
    {
        const bool branch_taken_0x294374 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x294378u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x294374) {
            ctx->pc = 0x2943B0u;
            goto label_2943b0;
        }
    }
    ctx->pc = 0x29437Cu;
    // 0x29437c: 0x3c030034
    ctx->pc = 0x29437cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x294380: 0x24630eb0
    ctx->pc = 0x294380u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x294384: 0x240200f0
    ctx->pc = 0x294384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x294388: 0x2221018
    ctx->pc = 0x294388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29438c: 0x431021
    ctx->pc = 0x29438cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294390: 0x8c440014
    ctx->pc = 0x294390u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x294394: 0x46007306
    ctx->pc = 0x294394u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
    // 0x294398: 0xc0b41ae
    ctx->pc = 0x294398u;
    SET_GPR_U32(ctx, 31, 0x2943A0u);
    ctx->pc = 0x29439Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    ctx->pc = 0x2D06B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetScale_0x2d06b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2943A0u; }
    }
    if (ctx->pc != 0x2943A0u) { return; }
    ctx->pc = 0x2943A0u;
    // 0x2943a0: 0x10000003
    ctx->pc = 0x2943A0u;
    {
        const bool branch_taken_0x2943a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2943A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2943a0) {
            ctx->pc = 0x2943B0u;
            goto label_2943b0;
        }
    }
    ctx->pc = 0x2943A8u;
label_2943a8:
    // 0x2943a8: 0x2411ffff
    ctx->pc = 0x2943a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2943ac: 0x220102d
    ctx->pc = 0x2943acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2943b0:
    // 0x2943b0: 0xdfbf0050
    ctx->pc = 0x2943b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2943b4: 0xdfb40040
    ctx->pc = 0x2943b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2943b8: 0xdfb30030
    ctx->pc = 0x2943b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2943bc: 0xdfb20020
    ctx->pc = 0x2943bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2943c0: 0xdfb10010
    ctx->pc = 0x2943c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2943c4: 0xdfb00000
    ctx->pc = 0x2943c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2943c8: 0x3e00008
    ctx->pc = 0x2943C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2943CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2941A0u: goto label_2941a0;
            case 0x2941B8u: goto label_2941b8;
            case 0x2941CCu: goto label_2941cc;
            case 0x2941E0u: goto label_2941e0;
            case 0x2941F0u: goto label_2941f0;
            case 0x294200u: goto label_294200;
            case 0x294220u: goto label_294220;
            case 0x294224u: goto label_294224;
            case 0x294238u: goto label_294238;
            case 0x29424Cu: goto label_29424c;
            case 0x294260u: goto label_294260;
            case 0x294274u: goto label_294274;
            case 0x2942BCu: goto label_2942bc;
            case 0x2942DCu: goto label_2942dc;
            case 0x2942F8u: goto label_2942f8;
            case 0x294304u: goto label_294304;
            case 0x29430Cu: goto label_29430c;
            case 0x294310u: goto label_294310;
            case 0x294340u: goto label_294340;
            case 0x294364u: goto label_294364;
            case 0x2943A8u: goto label_2943a8;
            case 0x2943B0u: goto label_2943b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2943D0u;
}
